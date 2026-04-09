# 실습과제 1

### 1. 메모리 누수(Memory Leak)를 설명하라
**메모리 누수**란 프로그램이 실행 중에 힙(Heap) 영역에 메모리를 동적으로 할당(Allocation)했지만, 해당 메모리를 더 이상 사용하지 않게 되었음에도 불구하고 이를 적절히 해제(Deallocation)하지 않아 시스템에 반환되지 않는 현상을 의미합니다. C++에서는 new 연산자로 할당한 후 delete를 호출하지 않을 때 발생합니다.

### 2. 메모리 누수가 왜 심각한 문제를 발생시키는지 설명하라
* **자원 고갈(Resource Exhaustion):** 가용 가능한 메모리가 지속적으로 줄어들어 결국 시스템의 메모리가 부족해집니다.
* **성능 저하:** 운영체제가 부족한 물리 메모리를 보충하기 위해 가상 메모리(Swapping)를 과도하게 사용하게 되어 시스템 전체의 속도가 급격히 느려집니다.
* **프로그램 비정상 종료(Crash):** 더 이상 메모리를 할당할 수 없는 상태(Out of Memory)에 도달하면 프로그램이 예외를 발생시키거나 강제로 종료됩니다. 특히 서버 프로그램처럼 장시간 실행되는 소프트웨어에서는 치명적입니다.

### 3. 메모리 누수를 방지하는 방법을 설명하라
* **할당과 해제의 짝 맞추기:** new를 사용했다면 반드시 대응하는 위치에 delete를 작성합니다. (배열인 경우 new []와 delete [])
* **RAII(Resource Acquisition Is Initialization) 패턴:** 자원의 획득을 객체의 생성과 연결하고, 자원의 해제를 객체의 소멸(Destructor)과 연결하여 객체가 스코프를 벗어날 때 자동으로 메모리가 해제되도록 설계합니다.
* **스마트 포인터 사용:** 수동으로 메모리를 관리하는 대신, C++ 표준 라이브러리에서 제공하는 스마트 포인터를 사용하여 자동 해제를 유도합니다.

### 4. C++ 스마트 포인터(Smart Pointer) 클래스에 대해 조사하라
C++11 표준부터 <memory> 헤더를 통해 제공되며, 포인터처럼 동작하면서도 메모리를 자동으로 관리해 주는 객체입니다.

* **std::unique_ptr:** 특정 자원에 대한 **독점적 소유권**을 가집니다. 포인터를 복사할 수 없으며, 객체가 소멸될 때 가리키던 메모리를 자동으로 해제합니다.
* **std::shared_ptr:** **참조 횟수(Reference Count)** 방식을 사용합니다. 여러 포인터가 하나의 자원을 공유할 수 있으며, 자원을 가리키는 포인터 개수가 0이 되는 순간 메모리가 해제됩니다.
* **std::weak_ptr:** shared_ptr가 가리키는 자원을 참조하지만 참조 횟수에는 영향을 주지 않습니다. 두 객체가 서로를 가리키는 **순환 참조(Circular Reference)** 문제를 해결할 때 사용합니다.


---

# 실습과제 2
## 1. 기존 코드의 문제점 분석

### 문제점: 메모리 누수 (Memory Leak)
제시된 코드의 `while` 루프 내부에 치명적인 메모리 관리 문제가 존재합니다.

* **동적 할당 후 해제 부재:** `new Circle(radius)` 연산자를 통해 힙(Heap) 메모리 영역에 `Circle` 객체를 동적으로 생성하지만, 이를 반환하는 `delete` 연산자가 없습니다.
* **참조 상실:** 루프가 다음 회차로 넘어갈 때마다 포인터 변수 `p`는 새로운 객체의 주소를 가리키게 됩니다. 이 과정에서 이전 회차에 할당된 객체의 주소값을 잃어버리게 되어, 프로그램이 종료될 때까지 해당 메모리를 해제할 수 없는 '메모리 누수' 상태가 반복됩니다.
* **결과:** 루프가 지속될수록 시스템의 가용 메모리가 고갈되어 성능 저하나 프로그램의 비정상 종료를 유발합니다.

## 2. 해결 방법

객체의 사용이 끝나는 시점(면적 출력 직후)에 `delete` 연산자를 호출하여 할당된 메모리를 시스템에 즉시 반환해야 합니다.

## 3. 수정된 코드 (Corrected Code)

```cpp
#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

int main() {
    int radius;
    while (true) {
        cout << "반지름 입력(음수이면 종료)>> ";
        cin >> radius;

        if (radius < 0) break; // 음수 입력 시 루프 종료

        // 1. 객체를 힙 영역에 동적 할당
        Circle* p = new Circle(radius);

        // 2. 멤버 함수를 호출하여 결과 출력
        cout << "원의 면적: " << p->getArea() << endl;

        // 3. [해결] 사용이 완료된 객체 메모리 해제
        // 할당된 메모리를 반환하여 메모리 누수를 방지합니다.
        delete p; 
    }

    return 0;
}
```

---

# 실습과제 3

## 1. 기존 코드의 문제점 분석

### 문제점: 포인터 주소 변경으로 인한 잘못된 메모리 해제
이 코드의 핵심적인 결함은 **할당받은 메모리의 시작 주소(Base Address)를 잃어버린 상태에서 해제를 시도**한다는 점입니다.

* **포인터 연산(`pArray++`)에 의한 주소 변경:** `new Circle[3]`을 통해 할당받은 주소값을 `pArray`가 보관하고 있었으나, `for` 문 내부에서 `pArray++`를 실행하면서 포인터가 가리키는 위치가 다음 원소로 계속 이동합니다.
* **잘못된 주소 전달:** 반복문이 종료된 시점에서 `pArray`는 배열의 첫 번째 원소가 아닌, 배열의 끝부분(마지막 원소 다음 주소)을 가리키고 있습니다.
* **런타임 에러 발생:** `delete []` 연산자는 반드시 `new []`가 반환했던 **최초의 시작 주소**를 전달받아야 합니다. 변경된 주소를 전달할 경우 메모리 관리 시스템이 이를 인식하지 못해 힙 손상(Heap Corruption) 에러가 발생하며 프로그램이 비정상 종료됩니다.

---

## 2. 해결 방법

원본 주소값을 변경하지 않고 각 원소에 접근해야 합니다. 가장 권장되는 방법은 배열 인덱스(`[]`)를 사용하는 것입니다.

---

## 3. 수정된 코드 (Corrected Code)

```cpp
#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    double getArea() { return 3.14 * radius * radius; }
};

int main() {
    // 1. 객체 배열 동적 할당
    Circle* pArray = new Circle[3];

    // 2. 포인터 주소를 직접 수정하지 않고 인덱스로 접근
    for (int i = 0; i < 3; i++) {
        // pArray[i]를 사용하면 pArray 포인터 변수의 값은 변하지 않습니다.
        cout << pArray[i].getArea() << '\n';
    }

    // 3. [해결] 원본 주소 그대로 메모리 해제
    // pArray가 여전히 할당된 시작 지점을 가리키고 있으므로 안전합니다.
    delete [] pArray; 

    return 0;
}
```

---

# 실습과제 4 - 실행결과

<img width="813" height="512" alt="image" src="https://github.com/user-attachments/assets/786831f3-77f4-473a-be7a-e676b97a1c96" />


---

# 실습과제 5 - 실행결과

<img width="976" height="402" alt="image" src="https://github.com/user-attachments/assets/1817deae-4cee-406f-97a5-c47f46d7c7eb" />



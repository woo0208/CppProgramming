## 1. 전처리 또는 선행처리(Preprocessing) 단계 설명
전처리는 컴파일러가 소스 코드를 기계어로 번역하기 직전에 수행되는 준비 단계입니다. 전처리기(Preprocessor)는 소스 파일에 포함된 지시자(#으로 시작하는 문장)를 해석하여 소스 코드를 변환합니다.

* **헤더 파일 삽입:** #include 지시문을 만나면 해당 헤더 파일의 전체 내용을 소스 코드의 해당 위치에 삽입합니다.
* **매크로 치환:** #define으로 정의된 식별자를 지정된 값이나 코드로 모두 변경합니다.
* **조건부 컴파일:** #ifdef, #ifndef 등의 지시자를 통해 특정 조건에 맞는 코드 블록만 컴파일러에 전달합니다.
```c
// 1. 헤더 파일 삽입 (Header File Insertion)
// #include 지시문은 컴파일러가 읽기 전 <iostream> 파일의 전체 내용을 
// 현재 소스 코드의 이 위치에 물리적으로 복사하여 붙여넣습니다.
#include <iostream>

// 2. 매크로 치환 (Macro Substitution)
// #define은 특정 식별자를 지정된 문자열이나 상수로 치환합니다.
// 아래 코드는 프로그램 내의 모든 'PI'를 '3.14159'로 바꿉니다.
#define PI 3.14159

// 매크로 함수 예시: 소스 코드 내의 SQUARE(number)를 ((number)*(number))로 확장합니다.
#define SQUARE(number) ((number) * (number))

// 3. 조건부 컴파일 (Conditional Compilation)
// 특정 매크로의 정의 여부에 따라 코드의 일부를 컴파일 범위에 넣거나 뺍니다.
#define DEBUG_MODE // 이 행을 삭제하거나 주석 처리하면 디버그 코드는 컴파일되지 않습니다.

int main() {
    using namespace std;

    #ifdef DEBUG_MODE
        // DEBUG_MODE가 정의되어 있을 때만 이 코드가 컴파일러에게 전달됩니다.
        cout << "[DEBUG] 프로그램이 시작되었습니다." << endl;
    #endif

    double radius = 5.0;
    double area = PI * SQUARE(radius); // 전처리 후: 3.14159 * ((5.0) * (5.0))

    cout << "반지름이 " << radius << "인 원의 면적: " << area << endl;

    return 0;
}
```
### 실행결과
<img width="1470" height="272" alt="image" src="https://github.com/user-attachments/assets/1ef1d387-2919-42e2-8f5f-a28605001457" />

---

## 2. 객체 cin, cout의 선언 위치와 의미
* **선언된 파일:** <iostream> 헤더 파일
* **객체의 의미:**
 <img width="932" height="295" alt="image" src="https://github.com/user-attachments/assets/d920babe-3b6d-4202-a4d7-4fe5bb0e92d8" />
 
### **std::cin:** istream 클래스의 객체로, 표준 입력 스트림(주로 키보드)을 나타냅니다.
---

<img width="766" height="251" alt="image" src="https://github.com/user-attachments/assets/a1b77a4c-f5ef-4c3e-bb07-5421f1cee757" />

### **std::cout:** ostream 클래스의 객체로, 표준 출력 스트림(주로 모니터 스크린)을 나타냅니다.
* **특징:** 이 객체들은 C++ 표준 라이브러리인 std 네임스페이스 안에 선언되어 있으며, 프로그램 시작 시 자동으로 생성되고 종료 시 자동으로 소멸하는 전역 객체입니다.

---

## 3. 프로그램을 링크할 때 이름 충돌(Name Collision)이 발생하는 경우
링크 단계에서 발생하는 이름 충돌은 주로 다중 소스 파일 프로젝트에서 나타납니다.

* **발생 상황:** 서로 다른 두 개 이상의 소스 파일(.cpp)에서 동일한 이름의 전역 변수나 전역 함수를 정의하고, 이를 하나의 실행 파일로 합칠(Link) 때 발생합니다.
* **링커의 오류:** 링커는 같은 이름의 심볼이 중복 정의되어 있으면 어떤 정의를 사용해야 할지 결정할 수 없으므로 링크 오류(Link Error)를 발생시킵니다.
* **해결 방법:** C++에서는 이를 해결하기 위해 이름 공간인 **네임스페이스(namespace)**를 사용하여 식별자의 유효 범위를 분리합니다.
<img width="892" height="667" alt="image" src="https://github.com/user-attachments/assets/e7899727-5d34-44c9-9dea-c813bd513d25" />


---

## 4. 스트림(Stream)이란 무엇인가?
스트림은 데이터의 흐름을 추상화한 장치 독립적인 인터페이스를 의미합니다.

* **데이터 통로:** 입력 장치(키보드, 파일 등)에서 프로그램으로, 또는 프로그램에서 출력 장치(모니터, 파일 등)로 데이터가 전달되는 연속적인 흐름입니다.
* **추상화:** 물리적인 장치의 종류에 상관없이 일관된 방식으로 데이터를 주고받을 수 있게 해줍니다.
* **순차적 처리:** 데이터는 입력된 순서대로 전달되는 FIFO(First-In First-Out) 구조를 가집니다.

<img width="1024" height="559" alt="image" src="https://github.com/user-attachments/assets/7df5db97-ef6b-4e09-bd3e-468a792ac0ac" />

---

## 5. 표준 출력 스트림의 언어별 자료형 비교

| 구분 | 언어 | 사용 자료형 (Type) | 표준 객체/변수명 |
| :--- | :--- | :--- | :--- |
| **C언어** | C | FILE* (구조체 포인터) | stdout |
| **C++언어** | C++ | std::ostream (클래스 타입) | std::cout |

* C++의 경우 객체 지향 언어답게 단순한 포인터가 아닌, 멤버 함수와 상태 정보를 포함하는 **클래스의 객체(인스턴스)**를 사용합니다.

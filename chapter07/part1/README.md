# 실습과제 1

#### ① 포함 다형성 (Inclusion Polymorphism / Subtyping)
* **개념:** 상위 클래스(Base Class) 형태의 포인터나 참조변수를 통해 하위 클래스(Derived Class)의 메서드를 호출하는 기법입니다.
* **특징:** **동적 바인딩(Dynamic Binding / Late Binding)**을 기반으로 작동하며, 런타임(Runtime) 환경에서 가상 함수 테이블(Vtable)을 참조하여 실제 객체의 타입에 맞는 가상 함수(Virtual Function)를 호출합니다.
* **예시:** - 상위 클래스 `Shape`에 가상 함수 `draw()`가 정의되어 있고, 이를 상속받은 `Circle`과 `Rectangle`이 각각 `draw()`를 재정의(Overriding)했을 때, `Shape*` 포인터 배열을 순회하며 `draw()`를 호출하면 각 객체에 맞는 그림이 그려집니다.

#### ② 매개변수 다형성 (Parametric Polymorphic)
* **개념:** 데이터 타입(Type) 자체를 매개변수화하여, 구체적인 타입에 의존하지 않고 범용적인 코드를 작성하는 방식입니다.
* **특징:** **정적 바인딩(Static Binding / Early Binding)**에 해당하며, 컴파일러가 컴파일 시점에 사용된 타입을 바탕으로 구체적인 코드를 생성(인스턴스화)합니다. 성능 저하(Runtime overhead)가 없습니다.
* **예시:** - C++의 **템플릿(Template)** 기능 (`template <typename T>`)이나 Java/C#의 **제네릭(Generics)**. 하나의 `Stack<T>` 클래스로 정수형 스택, 문자열 스택을 모두 처리할 수 있는 구조입니다.

#### ③ 오버로딩 다형성 (Overloading Polymorphism / Ad-hoc)
* **개념:** 동일한 이름을 가진 함수나 연산자가 전달받는 매개변수의 타입, 개수, 순서에 따라 서로 다른 동작을 수행하는 기법입니다.
* **특징:** 컴파일러가 컴파일 타임에 함수 시그니처(Signature)를 분석하여 어떤 함수를 호출할지 결정하는 **정적 바인딩**입니다.
* **예시:** - 함수 오버로딩: `print(int i)`, `print(double d)`, `print(string s)`가 동일한 이름을 공유하는 것.
  - 연산자 오버로딩: `+` 연산자가 정수 간에는 산술 더하기를 수행하고, 문자열 간에는 문자열 결합(Concatenation)을 수행하는 것.

#### ④ 강제 다형성 (Coercion Polymorphism)
* **개념:** 컴파일러가 피연산자의 타입을 자동으로 변환(Implicit Type Conversion / Casting)하여, 원래 다른 타입의 인수를 받는 함수에 전달할 수 있도록 지원하는 임시적 다형성입니다.
* **특징:** 언어의 타입 시스템 규칙에 따라 컴파일 타임 혹은 런타임에 형변환이 강제됩니다.
* **예시:** - `double result = 5 + 3.14;` 코드에서 정수 `5`가 double 타입인 `5.0`으로 자동 형변환(Promote)되어 실수 덧셈 연산 함수가 적용되는 경우.


---


# 실습과제 2


<img width="1108" height="276" alt="image" src="https://github.com/user-attachments/assets/5774bc0e-4cc8-41da-bf3f-0fa006530326" />


---

# 실습과제 3

<img width="1108" height="276" alt="image" src="https://github.com/user-attachments/assets/5774bc0e-4cc8-41da-bf3f-0fa006530326" />

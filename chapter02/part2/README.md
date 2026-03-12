## 1. 라이브러리는 헤더파일과 목적파일로 구성되어 있다. 헤더파일과 목적파일에 들어 있는 내용이 무엇인지 각각 설명하시오.
- 헤더 파일(Header File): 클래스, 함수, 변수 등의 '선언(Declaration)'이 들어 있습니다. 즉, 컴파일러에게 "이러한 이름과 형태를 가진 요소가 존재한다"는 것을 알려주는 역할을 합니다.
- 목적 파일(Object File/Library): 컴파일이 완료된 기계어 코드(Binary)가 들어 있습니다. 즉, 헤더 파일에서 선언된 함수나 클래스의 실제 '정의(Definition, 구현 코드)'와 변수의 실제 메모리 할당 내역이 컴파일된 상태로 존재합니다.

## 2. 함수의 선언, 정의, 호출은 각각 어디에 존재하는가?
- 선언(Declaration): 주로 헤더 파일(.h)에 존재하며, 함수의 원형(리턴 타입, 함수 이름, 매개변수 타입)을 명시합니다.
- 정의(Definition): 주로 소스 파일(.cpp)에 존재하며, 중괄호 {} 안에 함수의 실제 동작(구현부)을 작성합니다. (라이브러리의 경우 목적 파일 내부에 컴파일된 상태로 존재)
- 호출(Call): 해당 함수를 사용하는 다른 소스 파일(.cpp)의 내부(예: main 함수 안)에 존재합니다.

## 3. <iostream> 헤더파일에 cin, cout은 extern 변수로 선언되어 있다. extern 선언과 변수선언의 차이를 설명하라. 그리고, 그럼 cin, cout의 변수선언은 어디에 있는가?
- 일반적인 변수 선언(정의): `int a;`처럼 선언과 동시에 실제 메모리 공간을 할당받습니다.
- extern 선언: `extern int a;`처럼 실제 메모리를 할당하지 않고, "이 변수에 대한 실제 메모리 할당(정의)은 다른 소스 파일(또는 라이브러리)에 어딘가에 존재하니 거기를 참조해라"라고 컴파일러에게 알려주기만 합니다.
- cin, cout의 실제 변수 선언(정의) 위치: C++ 표준 입출력 라이브러리의 컴파일된 목적 파일(미리 컴파일된 런타임 라이브러리 내부)에 실제 메모리가 할당되어(정의되어) 있습니다. 링크(Link) 과정을 통해 우리가 작성한 코드와 연결됩니다.

## 4. 라이브러리 함수나 객체를 사용하기 전에 헤더파일을 include하는 이유를 설명하라.
- 컴파일러가 소스 코드를 컴파일할 때, 코드 내에 사용된 함수나 객체(예: cout)가 올바른 타입과 문법으로 사용되었는지 확인(타입 체크)해야 합니다. 헤더 파일을 include하면 그 안에 있는 '선언' 정보를 바탕으로 컴파일러가 문법적 오류를 잡아내고 정상적으로 목적 파일(.obj)을 생성할 수 있기 때문입니다. 만약 include하지 않으면 컴파일러는 해당 이름(식별자)이 무엇인지 알 수 없어 컴파일 에러("not declared in this scope")를 발생시킵니다.


---

# 실습과제 2 실행결과
<img width="1420" height="896" alt="image" src="https://github.com/user-attachments/assets/2000db1b-4f08-4d87-a9f7-99ed13b00150" />

---

# 실습과제 3 실행결과
<img width="1443" height="916" alt="image" src="https://github.com/user-attachments/assets/766141a4-b8b5-4bbc-bf11-6c82b07ac254" />


---

# 실습과제 4 실행결과
<img width="1456" height="943" alt="image" src="https://github.com/user-attachments/assets/7680d74f-644f-4192-9de8-05211d581630" />

---

# 실습과제 5 실행결과
<img width="1442" height="942" alt="image" src="https://github.com/user-attachments/assets/dfd5137a-8b92-4a8a-b3be-ea8364a5e6c3" />


---

# 실습과제 6 실행결과
<img width="1478" height="935" alt="image" src="https://github.com/user-attachments/assets/5b0c4c21-c915-4fba-aefa-8443e9aeeac7" />


# 실습과제 2 - 실행결과
<img width="1505" height="943" alt="image" src="https://github.com/user-attachments/assets/d26714e9-876b-420c-809c-c0820097af02" />

---

# 실습과제 3 - 실행결과 및 차이 분석
<img width="1468" height="975" alt="image" src="https://github.com/user-attachments/assets/c9fb4104-8e20-4ee5-b5c8-c7058174414b" />

### 실행결과가 다른 이유
실습과제3의 경우 main() 가 실행되기 전에 전역 객체로 생성되어 프로그램 전체의 상태를 관리합니다.

지역 객체: main 함수(또는 특정 블록)라는 범위(Scope)에 종속됩니다. 함수가 끝나면 사라지는 일회용 소모품 같은 존재입니다.

전역 객체: 프로그램 전체의 상태를 담당합니다. 어떤 함수에서도 접근이 가능하며, 프로그램이 살아있는 내내 메모리를 점유하는 정적 수명(Static Storage Duration)을 가집니다.

객체가 메모리에 존재하는 시간대(Time Zone) 자체가 다르기 때문에 C++ 설계 원칙상 두 방식은 완전히 다른 코드로 간주됩니다.

따라서 되도록 지역 객체를 위주로 사용하되 공유가 필요한 객체의 경우 전역 객체를 상수로 관리하는 것이 일반적입니다


---

# 실습과제 4 - 실행결과
<img width="1512" height="939" alt="image" src="https://github.com/user-attachments/assets/dddef31e-6d26-4439-bd6b-b1ec65d0ba16" />



---


# 실습과제 5 - 실행결과 및 차이 분석
<img width="1510" height="951" alt="image" src="https://github.com/user-attachments/assets/ebe699c3-4603-40e3-a9ee-7bfdcc0ab8a9" />


### 실행결과가 다른 이유
#### 실습과제3의 이유와 동일합니다




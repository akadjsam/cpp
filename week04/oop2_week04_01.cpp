// #include <iostream>
// using namespace std;

// enum JOB_KINDS{ // 가독성 면에서 개발자들 사이에서 자유롭게 할 수 있다.
//     JOB_NECRO, //따로 선언해주지 않으면 0,1,2 ... 순서대로 값이 지정됨.
//     JOB_BARB = 2, // 하지만 중간에 값을 넣어준다면 0, n, n+1, n+2 ... 순서대로 값이 지정된다.
//     JOB_WIZARD
// }; //열거체에 이름을 지정해서 사용할 수 있음, 없어도 사용 가능

// struct Character
// {
//     JOB_KINDS jobType;
// };

// int main(){
//     Character c;
//     c.jobType = JOB_WIZARD;

//     if(c.jobType == JOB_WIZARD){
//         cout << "2번스킬" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// enum Color{ //열거체는 기본적으로 integer 로 동작함. 하지만 기존의 정수타입과는 살짝 다르다. 산술 연산은 불가능
//     RED, 
//     GREEN, 
//     BLUE
// };

// int main(){
//     Color c1 = RED;
//     Color c2;

//     Color c3 = (Color)2; // 명시적 형 변환도 가능. 직접 숫자 대입은 불가능.
//     //enum 범위를 넘어서는 숫자 대입 가능하지만 어떤색인지 찾지 못하기 때문에 주의해야 한다. 
//     cout << c3 << endl; 

//     //산술연산 불가능
//     //c1 = GREEN + BLUE; // 에러 뜸.
//     //c1 = c1 + 1;
//     // 정수대입 불가
//     //c2 = 3;

//     //반대의 경우 대입과 산술연산이 가능
//     //묵시적 Casting
//     // 받는쪽의 변수가 int이면 가능하다. 묵시적 형 변환이 일어남
//     // int n = BLUE;
//     // int o = GREEN + BLUE; 
//     // cout << n << endl;
//     // cout << o << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// //Old style
// // namespace sophomore{
// //     enum Java{
// //         PASS,
// //         FAIL
// //     };
// // }
// // namespace freshman{
// //     enum Python{
// //         PASS,
// //         FAIL
// //     };
// // }

// //Modern Style (enum class c++ 11)
// enum class Java{ //기본적으로 enum은 integer이고 약한 결합이지만 enum class는 강한 결합임
//     PASS,
//     FAIL
// };
// enum class Python{
//     PASS,
//     FAIL
// };
// enum class Cpp{
//     PASS,
//     FAIL
// };

// int main(){
//     Cpp c = Cpp::PASS;

//     switch(c){
//         case Cpp::PASS: // PASS 대신에 0을 대입하면 에러가 발생 함. 강한 결합이기 때문
//             cout<< "합격" << endl;
//             break;
//         case Cpp::FAIL:
//             cout<< "재수강" << endl;
//             break;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int a = 5;
//     const int& ra = 9; // const 키워드를 사용하면 상수의 값을 넣을 수 있다.
//     cout << ra << endl;
//     // // 1. 선언하는 시점에 초기화가 되어야 한다.
//     // // 2. 처음 정의할 때 외에는 다른 변수를 참조하게 만들 수 없다.
//     // int a = 1;
//     // int b = 2;
//     // //int& c = a; //rule 1, 초기화
//     // const int& c = a; //const 키워드 사용 가능, c에 직접 접근하여 값을 변경할 순 없지만 a에 접근하여 값을 바꿀 수 있다.
//     // cout << c << endl;
//     // a = 6;
//     // cout << c << endl;

//     // c = 3;
//     // c = b; //rule 2, b의 값을 대입, (참조하는게 아님)
//     // c = 4;
//     // cout << a << endl;

//     //자료타입 &변수이름 = 대상변수;
//     // short s = 5;
//     // short& rs = s; // 레퍼런스 변수, 같은 메모리 주소를 공유
//     // short* ps = &s; // 포인터 변수, 다른 메모리 주소를 공유

//     // cout << s << " " << &s << endl;
//     // cout << rs << " " << &rs << endl;
//     // cout << *ps << " " << &ps << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

//프로토 타입을 선언하고 주석으로 설명을 적어주면 쉽게 파악 가능하다
//매개변수가 있을 때 type 혹은 type + 인수값을 적어주면 된다.
void Hello(int); //프로토 타입, 아래 선언된 함수를 위에 프로토 타입으로 적어주어야된다.
int Factorial(int); //factorial function, 반복문
int FactorialRecursion(int); //factorial function, 재귀함수

int main(){
    int(*pFact)(int); //함수 포인터 리턴타입이 일치하는 것만 지정 가능
    void(*pHi)(int);

    pFact = &Factorial; //함수 포인터는 함수의 주소를 받는다.
    //pFact = &Hello; //에러발생. 리턴타입이 서로 다르기 때문
    pHi = &Hello;

    int in;
    cin >> in;

    Hello(in);
    cout << Factorial(in) << endl;
    cout << FactorialRecursion(in) << endl;
    cout << (*pFact)(in) << endl;
    (*pHi)(in);

    return 0;
}

void Hello(int n){
    cout << "Hello World" << " " << n << endl;
}

int Factorial(int f){
    int result = 1;
    for(int i=1;i<=f;i++){
        result *= i;
    }
    return result;
}

int FactorialRecursion(int f){
    if(f<=1)
        return 1;
    else
        return f * FactorialRecursion(f-1);
}
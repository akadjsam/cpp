#include <iostream>
using namespace std;
int main(){
    //Lamda Expression(c++11,14)
    //[캡쳐블럭](매개변수리스트) -> 리턴타입{함수바디};
    // 함수 객체들을 별도로 만들지 않아도 되기 때문에 간결하게 코드 구성 가능
    []()->void{}; //(), -> , 리턴타입 생략 가능
    []() {};
    [] {};

    []{cout << "Hi Lamda!" << endl;}(); // 맨 끝에 ()은 람다 표현식을 즉시 실행 시키는 역할
    // auto inha = []{cout << "Hi Lamda!" << endl;}; // 변수에 담을 수 있음
    // inha();
    // auto inha = [](){return 5+10;};
    // cout << inha() << endl;

    // auto inha = [](int a, int b){return a+b;};
    // cout << inha(5,10) << endl;

    // auto inha = [](int a, int b) -> int{return a+b;}; // ->를 사용하려면 리턴타입을 명시해주어야 한다.
    // cout << inha(5,10) << endl;

    // auto inha = [](int a, int b) -> int{return a+b;}(5,10); // ->를 사용하려면 리턴타입을 명시해주어야 한다.
    // cout << inha << endl;

    // auto inha = [](float a, int b) -> int{return a+b;};
    // cout << inha(7.7f,2) << endl;

    // auto inha = [](float a, int b) -> float{return a+b;};
    // cout << inha(7.7f,2) << endl;

    // auto inha = [](float a, int b) {return a+b;}; //명시해주지 않으면 순전히 a+b 결과가 더 큰 타입의 float로 결과가 나온다.
    // cout << inha(7.7f,2) << endl;
    
    short c = 5, d = 7;
    auto inha = [c, d](float a, int b) -> int{
        return a + b + c + d;
    };

    cout << inha(1.9f, 2) << endl;
    
    return 0;
}
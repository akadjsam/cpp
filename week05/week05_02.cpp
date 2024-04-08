// #include <iostream>
// using namespace std;
// int main(){

//     // short c = 5, d = 7;
//     // auto inha = [&c, d](float a, int b) -> int{
//     //     c = -5; //값으로써 복제해서 사용하는 것이기 때문에 변경하지 못함. 하지만 위에 &를 붙이면 변경 가능함.
//     //     return a + b + c + d;
//     // };

//     // cout << inha(1.9f, 2) << endl;
//     // cout << c << endl; // 람다 내에서 수정하면 원본도 바뀐다.

//     // short c = 5, d = 7;
//     // auto inha = [&](float a, int b) -> int{ // &한개만 사용하면 모든 변수에 대한 값을 참조하여 값 변경 가능하다.
//     //     c = -5;
//     //     d = 8;
//     //     return a + b + c + d;
//     // };
//     // cout << inha(1.9f, 2) << endl;

//     // short c = 5, d = 7;
//     // auto inha = [=](float a, int b) -> int{ // =를 사용하면 c와 d에 대한 접근 가능.
//     //     return a + b + c + d;
//     // };
//     // cout << inha(1.9f, 2) << endl;
//     // cout << typeid(inha).name() << endl; //int가 아닌 객체로 나온다.

//     short c = 5, d = 7;
//     auto inha = [=](float a, int b) -> int{
//         return a + b + c + d;
//     }(1.9f, 2);
//     cout << inha<< endl;
//     cout << typeid(inha).name() << endl; //int로 나옴

//     return 0;
// }

#include <iostream>
#include <functional>
using namespace std;
// 익명함수, 함수 객체를 생성
// 함수 포인터와 함수 객체의 장점을 지닌다.
// 캡처 기능을 통해 함수 밖의  변수에 접근할 수 있고 &을 통해 람다함수 내에서도 외부 변수의 값을 변경할 수 있다.(참조하기때문)
// 재귀 호출이 가능하다.
int main(){

    // auto power = [](int b, int e) {
    //     int r = 1;
    //     for(auto i=1;i<=e;i++)
    //         r = r * b;
    //     return r;
    // };
    // cout << power(2,8) << endl;

    // 람다에서 재귀를 구현할 때 auto 타입으로는 추론 불가
    // 반드시 대입하려고 하는 함수의 타입이 명시되어야 함.
    function<int(int)> fact = [&fact](int n)->int{
        // if(n<=1)
        //     return 1;
        // else
        //     return n * fact(n-1); //fact라는 함수가 존재하지 않는다고 판단함.
        return n<=1 ? 1 : n * fact(n-1);
    };
    cout << fact(5) << endl;

    return 0;
}
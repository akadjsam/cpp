#include <iostream>
using namespace std;

int main(){
    int i = 7;
    float f = 3.99f;
    double d = 2.1;
    int* pi = &i;
    cout << i << endl;
    cout << *pi << endl;
    //pi = &d; 타입이 다르기 때문에 에러가 뜬다.

    void* pv = &i; //void 포인터
    pv = &d; //void 포인터이므로 타입이 달라도 에러가 뜨지 않음.

    cout << *(double*)pv << endl; //어떤 타입의 값을 받았는지 기억 못하므로 타입을 명시해 줘야 함
    //예를들어 double타입이 들어간 void 포인터에 int형을 명시하면 원하는 값이 나오지 않음(8바이트 중 앞의 4바이트만 사용하기 때문)

    return 0;

}
#include <iostream>
using namespace std;
int main(){
    // int arr[5];
    // int* parr = &arr[2]; // 혹은 int* parr = arr 로도 가능

    // cout << parr << endl;
    // cout << parr + 1 << endl; // 주소값 4증가(int이기 때문에)
    // cout << parr + 2 << endl;

    // int arr[5];
    // int* p1 = &arr[1];
    // int* p2 = &arr[4];
    // cout << p1 << endl;
    // cout << p2 << endl;
    // cout << p2 - p1 << endl; // 원소간의 차를 출력. 데이터 타입이 바뀌어도 같음

    //배열 포인터
    // long arr[10];
    // long(*p)[10] = &arr; // 배열 포인터를 사용할 때는 앞에 &기호를 붙여야 한다.
    // (*p)[5] = 100;
    // cout << arr[5] << endl;
    // cout << (*p)[5] << endl;

    //포인터 배열
    short a,b,c=5,d=2;
    short* arr[4]; //포인터 배열 안에는 각 원소의 주소값을 값으로 가진다.
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;

    cout << arr[0] << endl; // 주소찍기 주소를 찍었을 때 비슷한 위치에 있지만 연속적인 위치는 아니다. 왜냐? 선언한 변수들의 위치를 포인터 배열안에 값으로 주었기 때문
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;

    cout << &arr[0] << endl; // 주소찍기 얘네들은 연속된 주소를 출력. 왜? 포인터 배열 자체의 주소를 찍었기 때문
    cout << &arr[1] << endl; //포인터 배열간 주소 차이는 32비트 운영체제에서는 4바이트. 64비트 운영체제에서는 8바이트 단위로 출력된다.
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;

    cout << *arr[0] << endl; // 값 찍기
    cout << *arr[1] << endl;
    cout << *arr[2] << endl;
    cout << *arr[3] << endl;

    return 0;
}
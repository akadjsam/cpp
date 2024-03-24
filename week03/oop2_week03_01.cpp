// #include <iostream>
// using namespace std;
// int main(){
//     // int arr[5];
//     // int* parr = &arr[2]; // 혹은 int* parr = arr 로도 가능

//     // cout << parr << endl;
//     // cout << parr + 1 << endl; // 주소값 4증가(int이기 때문에)
//     // cout << parr + 2 << endl;

//     // int arr[5];
//     // int* p1 = &arr[1];
//     // int* p2 = &arr[4];
//     // cout << p1 << endl;
//     // cout << p2 << endl;
//     // cout << p2 - p1 << endl; // 원소간의 차를 출력. 데이터 타입이 바뀌어도 같음

//     //배열 포인터
//     // long arr[10];
//     // long(*p)[10] = &arr; // 배열 포인터를 사용할 때는 앞에 &기호를 붙여야 한다.
//     // (*p)[5] = 100;
//     // cout << arr[5] << endl;
//     // cout << (*p)[5] << endl;

//     //포인터 배열
//     short a,b,c=5,d=2;
//     short* arr[4]; //포인터 배열 안에는 각 원소의 주소값을 값으로 가진다.
//     arr[0] = &a;
//     arr[1] = &b;
//     arr[2] = &c;
//     arr[3] = &d;

//     cout << arr[0] << endl; // 주소찍기 주소를 찍었을 때 비슷한 위치에 있지만 연속적인 위치는 아니다. 왜냐? 선언한 변수들의 위치를 포인터 배열안에 값으로 주었기 때문
//     cout << arr[1] << endl;
//     cout << arr[2] << endl;
//     cout << arr[3] << endl;

//     cout << &arr[0] << endl; // 주소찍기 얘네들은 연속된 주소를 출력. 왜? 포인터 배열 자체의 주소를 찍었기 때문
//     cout << &arr[1] << endl; //포인터 배열간 주소 차이는 32비트 운영체제에서는 4바이트. 64비트 운영체제에서는 8바이트 단위로 출력된다.
//     cout << &arr[2] << endl;
//     cout << &arr[3] << endl;

//     cout << *arr[0] << endl; // 값 찍기
//     cout << *arr[1] << endl;
//     cout << *arr[2] << endl;
//     cout << *arr[3] << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// // struct Student
// // {
// //     int id; // 4
// //     char name[20]; // 1
// //     float grade[2]; // 8
// // };
// struct Rectangle
// {
//     int x,y;
//     int w,h;

// };


// int main(){
//     //구조체 배열
//     // Student sInfos[4] = {
//     //     {202001,"Lee",{4.3f,4.1f}},
//     //     {202010,"Choi",{3.3f,3.1f}},
//     //     {202107,"Park",{3.5f,4.1f}},
//     //     {202101,"Kim",{4.2f,3.7f}}
//     // };

//     // for(auto i=0;i<4;i++){
//     //     cout << sInfos[i].id << endl;
//     //     cout << sInfos[i].name << endl;
//     //     cout << sInfos[i].grade[0] << endl;
//     //     cout << sInfos[i].grade[1] << endl;
//     // }
//     // Rectangle r = {15,15,50,70};
//     // Rectangle* pr = &r; //포인터는 가르키는 값과 타입이 같아야 한다.
//     // cout << pr->h << endl;
//     // cout << (*pr).h << endl; //()로 묶어서 *를 먼저 처리 -> 연산자와 같은 결과가 나온다.
//     // pr->h = 40;
//     // (*pr).w = 100;
//     // cout << pr -> h << endl;
//     // cout << pr -> w << endl;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// //Linked List
// struct LinkedList
// {
//     int data;
//     LinkedList* p;
// };

// int main(){
//     LinkedList a,b,c;
//     a.data = 99;
//     a.p = &b;

//     b.data = 93;
//     b.p = &c;

//     c.data = 98;
//     c.p = &a;
//     cout << b.data << endl;
//     cout << a.p->data << endl;
//     cout << (*a.p).data << endl;
//     cout << a.p->p->data << endl;
//     cout << a.data << endl;
//     cout << a.p->p->p->data << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
union JobUnion //공용체 - 제일 큰 값을 기준으로 전체 사이즈가 정해진다.
{
    //char name[32]; //공용체는 가장 큰 멤버 변수의 크기로 메모리 할당
    //float salary;
    long salary;
    int workerId;
}uJob;

struct JobStruct // 총 크기는 40byte로 출력된다. 바이트패딩
{
    //char name[32]; 
    //float salary;
    long salary;
    int workerId;
}sJob;
8u
int main(){
    //uJob.salary = 1.1f;
    uJob.salary = 11;
    uJob.workerId = 1234;

    sJob.salary = 2.1f;
    sJob.workerId = 4321;

    cout << uJob.salary << endl; //값이 이상하게 나옴. 이유 : 같은 공간에 덮어쓰기 때문에 int 타입이 float 타입으로 값이 들어가기 때문 long, int이면 정상적으로 동작함
    cout << uJob.workerId << endl;
    cout << sJob.salary << endl;
    cout << sJob.workerId << endl;

    cout << sizeof(uJob) << endl;
    cout << sizeof(sJob) << endl;
    return 0;

}
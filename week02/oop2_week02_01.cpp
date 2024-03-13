// #include <iostream>
// using namespace std;

// int main(){
//     //자료형, 음수표현방식(2의 보수법),자료형의 SIZE 공부할 것 

//     //const 상수 키워드 사용시 값 변경 불가
//     const int i = 5; //4byte = 32bit
//     // i = 7; 코드 중간에 값을 변경할 수 없다.
//     cout << i << endl;

//     //short s = 65535; // 2byte = 16bit (범위는 -2^15 ~ 2^15-1) 양수범위를 벗어났으므로 -1 출력


//     unsigned short s = 65536; // 2byte = 16bit (unsigned 범위는 양수범위만 0 ~ 2^16-1 0때문에 -1을 해줌)
//     // 1111 1111 1111 1111 = 65535 
//     //+                  1
//     //10000 0000 0000 0000 -> 앞의 1은 잘리고 0으로 출력하게 된다.
//     cout << s << endl;
    
//     // 배열
//     // int arr[4];
//     // arr[0] = -9;
//     // arr[3] = 300000;
//     //cout << arr[2] << '\n'; // 배열에 값이 없는 원소를 출력하면 쓰레기값이 출력된다.

//     //초기화 방법
//     //int arr[4] = {0}; //배열을 0으로 초기화
//     //int arr[4] = {-9,0,0,30000};

//     //배열명은 포인터 상수이다.
//     int arr[4] = {-9,0,0,30000};
//     //auto arr[4] = {-9,0,0,30000};
//     //int* parr = &arr[0];
//     auto* parr = &arr[0]; //하지만 배열 앞에는 auto를 사용할 수 없다.

//     for(auto i=0;i<4;i++)
//         //cout << parr+i << endl; //arr의 주소값 출력
//         //cout << *(parr+i) << endl; //arr의 값 출력
//         //cout << parr[i] << endl; //arr의 값 출력
//         cout << *(arr+i) << endl; //arr의 값 출력


//     return 0;
// }


#include <iostream>
#include <windows.h> // 터미널창 띄우기
using namespace std;

struct StudentInfo{
    int id;
    float grade;
    char bloodType;
}s3 = {20201236,3.2f,'O'}, s4;

int main(){

    // const auto f = 3.24; //auto 는 주어지는 값에 따라서 타입이 정해진다. const키워드 사용 가능 f가 없으면 float, 따로 적어주지 않으면 double로 인식
    // auto s = "test";
    // //f = 3.3f; //error

    // cout << sizeof(f) << '\t' << typeid(f).name() << '\n';
    // cout << sizeof(s) << '\t' << typeid(s).name() << '\n'; // 글자크기에 상관없이 8바이트 (visual studio는 4바이트)로 출력, 포인터 자체의 크기이기 때문
    // cout << f << '\n';
    // cout << s << '\n';


    // //void pointer - void로 선언해놓고 후처리
    // short a = 2;
    // double b = 3.14;
    // //int* ps;
    // void* pv;
    // //ps = &a; //int, short 서로 타입이 매칭되지 않아서 에러
    // pv = &a;
    
    // //cout << *ps << endl;
    // //cout << *pv << endl; //에러
    // cout << *(short*)pv << endl; // void 포인터를 사용할 때의 주의점은 작성자가 어떤 타입으로 받았는지 알아야 한다.
    // pv = &b;
    // cout << *(double*)pv << endl; //출력시점에 정확하게 타입을 명시해주어야 함.


    // Old ver
    // //char s[] = "Hell"; //자동으로  \0이 삽입이 된다.
    // char s[] = {'H','e','l','l','\0'}; // 끝에 null을 넣어주어야함
    // void* ps;
    // ps = s; //ps = &s[0]; 같은 표현식
    // cout << (char*)ps << endl; // cout << s << endl; 과 같은 표현식

    // for(int i=0;i<sizeof(s);i++)
    //     cout << *((char*)ps+i) << endl;

    //Modern ver
    // char s[] = "Hell";
    // void* ps;
    // ps = s; //ps = &s[0]; 같은 표현식

    // //ranged based for loop
    // for(auto i : s)
    //     cout << i << endl; //가독성이 좋아진다.
    
    // for(int i : {1,3,5,7,-9})
    //     cout << i;

    // StudentInfo s1 = {20201234,3.5f,'O'};
    // StudentInfo s2 = {20201235,3.7f,'A'};

    // cout << s2.grade << endl;
    // cout << s1.id << endl;
    // cout << s3.bloodType << endl;

    // s4 = s2;
    // cout << s4.bloodType << endl; //구조체가 복사가 됨. 서로 다른 메모리 할당
    // s4.bloodType = 'B';
    // cout << s4.bloodType << endl; //내부적으로 deepcopy가 일어남 따라서 s2의 bloodType에는 값의 변화가 없음

    // // s4.bloodType = 'B';
    // // s4.id = 20201237;
    // // s4.grade = 2.9f;
    
    int a = 10;
    int b = 0XA;
    int c = 012; // 8진수
    int d = 0b1010;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    

    system("pause"); //external console
    return 0;
}

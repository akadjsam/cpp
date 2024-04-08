// #include <iostream>
// using namespace std;
// // 동적 메모리 할당 <-> 스태틱 메모리
// // 동적으로 필요에 의해서 할당한다.

// int main(){

//     int* p;
//     int length, total = 0;
//     double average;
//     cin >> length;
//     p = new int[length]; // 동적 메모리 할당 - 20바이트를 할당

//     for(auto i=0;i<length;i++)
//         cin >> *(p+i);

//     for(auto i=0;i<length;i++)
//         total += p[i];
    
//     average = total / (double)length; // 정수끼리의 나눗셈에서 손실이 있을 수 있기 때문에 한쪽을 double 로 캐스팅

//     cout << total << endl;
//     cout << average << endl;
    
//     delete[] p; // 사용한 동적 메모리 해제

//     return 0;
// }

// #include <iostream>
// using namespace std;
// // 동적 메모리 할당 <-> 스태틱 메모리
// // 동적으로 필요에 의해서 할당한다.

// int main(){

//     int* p = new int; // 할당
//     *p = 486;
//     cout << *p << endl;
//     delete p; // 해제, 해제해주지 않으면 메모리 누수 문제가 발생할 수 있으므로 명시적 선언해주어야 한다.
//     // 한번 가르키는 대상을 해제하면 또 해제하면 안된다.
//     return 0;
// }


#include <iostream>
using namespace std;
// 동적 메모리 할당 <-> 스태틱 메모리
// 동적으로 필요에 의해서 할당한다.

int main(){

    short* p = new short[100];
    cout << p << endl;
    delete[] p;
    p = NULL;

    cout << p << endl;
    delete[] p;

    return 0;
}
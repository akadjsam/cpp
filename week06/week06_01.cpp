// #include <iostream>
// using namespace std;
// char* ReverseString(const char* src, int len){// src에는 주소만 전달이 된다.
//     char* rev = new char[len + 1]; //동적 메모리 할당
//     for(auto i = 0; i < len; ++i)
//         rev[i] = src[len - i - 1];
//     rev[len] = NULL; //cout에게 끝을 알려주기 위해 넣음 '\0'과 같은 null
//     return rev; // 힙 영역에 생성된 rev의 주소를 전달

// }
// int main(){
//     char orig[] = "Inha";
//     char* copy = ReverseString(orig, 4);
//     cout << orig << endl;
//     cout << copy << endl;
//     delete[] copy;
//     copy = NULL; // copy에 있는 임의의 주소 번지를 포인팅을 하지 않도록 끊어버림.
    
//     return 0;
// }

// //Old style
// #pragma warning(disable:4996)
// #include <iostream>
// #include <cstring>

// using namespace std;

// int main(){
//     char src[] = "Inha Univ";
//     int len = strlen(src); //cstring 문자열의 길이를 반환
//     cout << len << endl;

//     char* dest = new char[len+1]; //null을 고려하여 +1
//     strcpy(dest, src); // c++에는 strcpy_s를 권장한다.

//     cout << src << endl;
//     cout << dest << endl;
//     delete[] dest;
//     dest = NULL; //32비트(?)를 NULL로 채워서 아무것도 가르키지 않게 함
//     return 0;   
// }

// //C++ style - 수행속도에 있어서 이점을 가지진 않는다.
// #include <iostream>

// using namespace std;

// int main(){
//     string src = "Inha Univ"; //c++에서는 string을 지원함
//     string dest;

//     cout << src.size() << endl; //문자열의 길이

//     dest = src;

//     cout << src << endl;
//     cout << dest << endl;

//     return 0;   
// }


// // Old style
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main(){
//     char str1[10] = "I";
//     char str2[] = "H";
//     if (strcmp(str1,str2) == 0)
//         cout << "같다" << endl;
//     else{
//         cout << "다르다" << endl;
//         cout << strcmp(str1,str2) << endl; //I,H 비교했을 때 알파벳 순서가 str1이 앞서면 -1, str2가 앞서면 1, 두개가 같으면 0을 반환한다.
//     } 
//// ascii 비교
////str1 < str2 = -1 리턴
////str1 > str2 = 1 리턴
        
//     // strcat(str1,str2); //str1에는 결합되지만 str2는 결합되지 않음
//     // cout << str1 << endl;
//     // cout << str2 << endl;

//     return 0;   
// }

// // C++ style
// #include <iostream>
// using namespace std;

// int main(){
//     string str1 = "Inha"; 
//     string str2 = "Univ";

//     // str1 = str1 + str2;
//     // cout << str1 << endl;

//     if(str1 == str2) // !=와 같은 비교연산도 사용 가능
//         cout << "same" << endl;
//     else{
//         cout << "diff" << endl;
//         cout << typeid(str1 == str2).name() << endl; // bool 타입을 리턴한다.
//     }
        

//     return 0;   
// }

#include <iostream>
using namespace std;

int main(){
    string str1 = "Hi, Inha Univ"; 
    cout << str1.find("Inha") << endl; // 인덱스 값을 숫자형태로 출력한다. 4출력
    string capture = str1.substr(4,4); //4번째 인덱스로부터 4글자를 가져옴
    cout << capture << endl;

    return 0;   
}
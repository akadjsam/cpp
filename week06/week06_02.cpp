// #include <iostream>
// #include <cstring>

// using namespace std;

// int main(){
//     char cstyle[] = "Hi~";
//     string cppstyle;
//     cppstyle = cstyle; // 묵시적 캐스팅, 별도의 메모리 공간을 차지함
//     cout << cppstyle << endl;

//     return 0;   
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// int main(){
    
//     string cppstyle = "Hello!";
//     const char* cstyle = NULL;
//     cstyle = cppstyle.c_str(); //보관한 메모리 번지 주소를 전달, 값을 읽어들일 순 있지만 변경은 불가능
//     cout << cstyle << endl;

//     return 0;   
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// int main(){
    
//     string cppstyle = "Hello!";
//     char* cstyle = new char[cppstyle.size() + 1];

//     strcpy(cstyle, cppstyle.c_str());
//     cstyle[0] = 'Y';

//     cout << cppstyle << endl;
//     cout << cstyle << endl;

//     delete[] cstyle;
//     cstyle = NULL;
//     return 0;   
// }

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
    
    char cstyle[10];
    string cppstyle;

    // cin >> cstyle;
    // cin >> cppstyle; //발생될 수 있는 에러가 있음
    cin.getline(cstyle,3); //여기서 에러가 발생하면 cin객체가 fail상태로 바뀐다.
    cin.clear(); // cin객체의 상태를 성공상태로 바꿈
    getline(cin, cppstyle); //따라서 이 구문이 실행됨

    cout << cstyle << endl;
    cout << cppstyle << endl;

    return 0;
}
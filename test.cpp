#include <iostream>
#include <string>
using namespace std;
int main() {
    // 첫 번째 문자열
    string a = "234";
    // 두 번째 문자열
    std::string* b = new string("239");
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    // 메모리 누수를 방지하기 위해 동적으로 할당된 문자열을 삭제
    delete b;

    return 0;
}
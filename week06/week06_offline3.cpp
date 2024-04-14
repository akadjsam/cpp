#include <iostream>
#include <cstring>

using namespace std;

int main(){
    //string a("inha!0123456789abc");
    string a = "inha!0123456789abc"; //위에와 결과는 같다. 연산자 오버로딩
    string b(a); //복사생성자

    cout << a << endl;
    cout << a.size() << endl; //객체지향 언어이므로 . 를 사용해야 함.
    cout << a.capacity() << endl; //용량이 부족하면 용량을 늘린다.(heap memory)

    cout << b << endl;
    //capacity는 size보다 용량이 크거나 같다.
    return 0;
}

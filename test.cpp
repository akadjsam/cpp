#include <iostream>
#include <windows.h> // 터미널창 띄우기
using namespace std;

struct temp {
    int a;
    char c[20];
    float b[2];
};

int main(){
    cout << sizeof(temp) << endl;
    system("pause"); //external console
}
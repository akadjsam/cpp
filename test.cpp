#include <iostream>
#include <windows.h> // 터미널창 띄우기
using namespace std;

struct temp {
    double a;
    char c;
    int b;
    
};

int main(){
    cout << sizeof(temp) << endl;
    system("pause"); //external console
}
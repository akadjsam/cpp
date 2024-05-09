#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <string>
#include <functional>

using namespace std;

enum Color{
    RED,
    Blue,
    Green
}c1;

int main(){
    function<int(int)> inha = [&inha](int n)->int{
        if(n<=1)
            return 1;
        else
            inha(n-1) * n;
    };
    
}
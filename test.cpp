#include <iostream>
using namespace std;

//Modern Style (enum class c++ 11)
enum class Java{ //기본적으로 enum은 integer이고 약한 결합이지만 enum class는 강한 결합임
    PASS,
    FAIL
};

int main(){
    Java c = Java::PASS;

    switch(c){
        case Java::PASS: // PASS 대신에 0을 대입하면 에러가 발생 함. 강한 결합이기 때문
            cout<< "합격" << endl;
            break;
        case Java::FAIL:
            cout<< "재수강" << endl;
            break;
    }
    return 0;
}
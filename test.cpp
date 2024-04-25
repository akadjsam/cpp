#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// void myIsPrime(int number){
//     bool flag = true;
//     for(int i = 2; i*i<number;i++){
//         if(number%i == 0){
//             flag = false;
//             break;
//         }
//     }
//     if(flag)
//         cout << "Prime number";
//     else
//         cout << "Not prime number\n";
// }

int main() {
    char a[] = "ab";
    char b[] = "abc";

    auto myStrcmp = [](const char* s1, const char* s2)->int{
        int i = 0;
        while(s1[i]!= NULL && s2[i]!= NULL){
            if(s1[i] > s2[i])
                return 1;
            else if(s1[i] < s2[i])
                return -1;
            i ++;
        }
        if(s1[i] == NULL && s2[i] == NULL)
            return 0;
        else if(s1[i] == NULL)
            return -1;
        return 0;
    };

    auto myIsPrime = [](int number)->void{
        bool flag = true;
        for(int i=2;i*i<number;i++){
            if(number % i == 0){
                flag = false;
                break;
            }
        }
        if(flag)
            cout << number << " is Prime number!" << endl;
        else
            cout << number << " is Not Prime number!" << endl;
    };
    myIsPrime(13);
    cout << myStrcmp(a,b)<<endl;
    cout << strcmp(a,b) << endl;
    myIsPrime(13);
    return 0;
}

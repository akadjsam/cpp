// #include <iostream>
// using namespace std;


// int main(){
//     int totalPrice = 0;
//     int noOfPeople = 0;
//     cout << "몇명이서 오셨나요?" << " : ";
//     cin >> noOfPeople;

//     int* ages = new int[noOfPeople];
//     for(int i=0;i<noOfPeople;i++){
//         cout << "나이 : ";
//         cin >> ages[i]; //혹은 *(ages + i)로 사용해도 가능
//     }
//     for(int i=0;i<noOfPeople;i++){
//         if(ages[i] < 8){
//             totalPrice += 5000;
//         }
//         else if(ages[i] < 65){
//             totalPrice += 15000;
//         }
//         else{
//             totalPrice += 9000;
//         }
//     }
//     cout << "총 " << noOfPeople << "명의 금액은 : " << totalPrice << endl;
//     delete[] ages;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Pokemon{
//     private:
//         int hp;
//     public:
//         Pokemon(int hp):hp(hp){
//             //this->hp = hp;
//         }
//         int getHP() const{
//             return hp;
//         }

// };


// int main(){
//     Pokemon p1(5);

//     cout << p1.getHP() << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     char c = 65;
//     char a = 66;
//     //const char* pc = &c;
//     // *pc = 90; // 이렇게 하는게 불가능 하다. 가르키는 주소의 값을 변경할 수 없다.
//     //pc = &a; //가르키는 대상은 바꿀 수 있음
    
//     char* const pc = &c;
//     *pc = 90; //이건 가능
//     //pc = &a; // 이렇게 하는게 불가능 하다. 가르키는 주소 변경할 수 없다.
//     cout << c << *pc << endl;

// }

#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    //int& c = a; // 레퍼런스 변수는 선언과 동시에 할당되어야 한다.(예외는 존재)

    // int &c; //위의 규칙에 의해 불가능
    // c = a;
    
    //int& c = 99;
    //const int& c = 99; 이렇게 사용은 가능한데 const라서 변경 불가능 하다. 즉 읽기 전용으로 사용해야 한다.

    int& c = a;
    c = b; // b의 할당된 값 자체를 옮김

    cout << a << endl;
    cout << &a << endl;
    
    cout << c << endl;
    cout << &c << endl;
    

    return 0;
}
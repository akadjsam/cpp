// #include <iostream>
// using namespace std;

// class Circle
// {
// private:
//     double radius;
//     //double m_radius;
// public:
//     Circle(); // default constructor
//     Circle(double r); // parameter constructor
//     Circle(const Circle& c); // copy constructor
//     //Circle(const Circle& c) = delete; //복사생성을 허가하지 않음
//     ~Circle();  // destructor

//     double getRadius() const;
//     double getArea() const;
//     double getPerimeter() const;
//     void setRadius(double value);

// };

// /*
// Circle::Circle() {
//     radius = 1.0;
//     cout << this << " 객체 생성(기본생성자)\n";
// }
// */



// // Circle::Circle(double r) {
// //     radius = r;
// //     cout << this << " 객체 생성(매개변수생성자)\n";
// // }


// Circle::Circle() : radius(1.0) {
//     cout << this << " 객체 생성(기본생성자)\n";
// }


// // Circle::Circle(double radius) {    
// //     radius = radius;  // 멤버변수와 매개변수의 구분이 불가능
// //     cout << this << " 객체 생성(매개변수생성자)\n";
// // }



// // Circle::Circle(double radius) {    
// //     this->radius = radius; // this : 실행시점의 객체, this포인터를 사용하여 실행시점의 객체를 가르킨다.
// //     m_radius = radius;
// //     cout << this << " 객체 생성(매개변수생성자)\n";
// // }


// Circle::Circle(double radius) : radius(radius) {    // : 괄호 앞에는 멤버 변수, 괄호 안에는 매개 변수. 이 부분은 생성자에서만 사용할 수 있다.
//     cout << this << " 객체 생성(매개변수생성자)\n";
// }


// /*
// Circle::Circle(const Circle& c) {
//     radius = c.radius;
//     cout << this << " 객체 생성(복사생성자)\n";
// }
// */

// Circle::Circle(const Circle& circle) : radius(circle.radius) { // : 괄호 밖에는 실행시점의 객체 radius, 안에는 (매개변수로 받은 Circle객체의 멤버변수)
//     cout << this << " 객체 생성(복사생성자)\n";
// }
// Circle::~Circle(){
//     cout << this << " 객체 소멸. 내가 너를 기억하마!\n";
// }

// double Circle::getRadius() const
// {
//     int a = 9;
//     //radius = 2.0;
//     return radius;
// }
// double Circle::getArea() const
// {
//     const double PI = 3.14;
//     return (PI * radius * radius);
// }
// double Circle::getPerimeter() const
// {
//     const double PI = 3.14;
//     return (2 * PI * radius);
// }
// void Circle::setRadius(double value)
// {
//     radius = value;
// }

// void test(){
//     cout << "Circle 5" << endl;
//     Circle circle5(2.0);
//     cout << "Circle 6" << endl;
//     Circle circle6(circle5);
//     cout << "반지름: " << circle6.getRadius() << endl; 

// }

// int main()
// {
//     cout << "Circle 1" << endl;
//     Circle circle1(5.0);
//     cout << circle1.getRadius() << endl;
//     return 0;
// }

#include <iostream>
#include "week03_01_sub.h"

using namespace std;

void test(){
    cout << "Circle 5" << endl;
    Circle circle5(2.0);
    cout << "Circle 6" << endl;
    Circle circle6(circle5);
    cout << "반지름: " << circle6.getRadius() << endl; 
    cout << Circle::getCount() << "\n";
}

int main()
{
    cout << Circle::getCount() << "\n";
    cout << "Circle 3" << endl;
    Circle circle3(5.0);
    cout << circle3.getCount() << endl;

    cout << "Circle 1" << endl;
    Circle circle1;
    cout << "반지름: " << circle1.getRadius() << endl;
    circle1.setRadius(10.0);

    cout << Circle::getCount() << "\n";
    test();
    cout << Circle::getCount() << "\n";
  
    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPerimeter() << "\n";

    cout << "Circle 4" << endl;
    Circle circle4(circle2);
    cout << "반지름: " << circle4.getRadius() << endl;

    cout << Circle::getCount() << "\n";
    cout << circle2.getCount() << "\n";
    return 0;
}
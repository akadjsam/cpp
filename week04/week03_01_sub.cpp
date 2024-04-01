#include "week03_01_sub.h"
#include <iostream>
using namespace std;
int Circle::count = 0; // 초기화 할때는 static 키워드를 사용하지 않아도 된다.

/*
Circle::Circle() {
    radius = 1.0;
    count++;
    cout << this << " 객체 생성(기본생성자)\n";
}
*/

/*
Circle::Circle(double r) {
    count++;
    radius = r;
    cout << this << " 객체 생성(매개변수생성자)\n";
}
*/
Circle::Circle() : radius(1.0) {
    count++;
    cout << this << " 객체 생성(기본생성자)\n";
}
/*
}
Circle::Circle(double radius) {    
    radius = radius;  // 멤버변수와 매개변수의 구분이 불가능
    count++;
    cout << this << " 객체 생성(매개변수생성자)\n";
}
*/

/*
Circle::Circle(double radius) {    
    this->radius = radius;
    count++;
    cout << this << " 객체 생성(매개변수생성자)\n";
}
*/


Circle::Circle(double radius) : radius(radius) {    
    count++;
    cout << this << " 객체 생성(매개변수생성자)\n";
}


/*
Circle::Circle(const Circle& c) {
    count++;
    radius = c.radius;
    cout << this << " 객체 생성(복사생성자)\n";
}
*/

Circle::Circle(const Circle& circle) : radius(circle.radius) {
    count++;
    cout << this << " 객체 생성(복사생성자)\n";
}
Circle::~Circle(){
    count--;
    cout << this << " 객체 소멸. 내가 너를 기억하마!\n";
}

double Circle::getRadius() const
{
    int a = 9;
    //radius = 2.0;
    return radius;
}
double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}
void Circle::setRadius(double value)
{
    radius = value;
}
int Circle::getCount(){
  return count;
}



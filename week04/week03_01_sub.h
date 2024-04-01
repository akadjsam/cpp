#pragma once
#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    static int count; // static field, global memory
public:
    Circle(); // default constructor
    Circle(double r); // parameter constructor
    Circle(const Circle& c); // copy constructor
    //Circle(const Circle& c) = delete; 
    ~Circle();  // destructor

    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);

    static int getCount(); // static method, 클래스 안에 선언할 때만 static 키워드만 사용한다.
};

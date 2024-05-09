#pragma once
#include "person.h"

class Student : public Person //부모클래스 선언된 public 멤버들을 선언해주지 않아도 사용할 수 있음
{
private:
    double gpa;
public:
    Student();
    Student(long identity, double gpa);
    void set(int identity, double gpa);
    void setGPA(double gpa);
    double getGPA() const;
};

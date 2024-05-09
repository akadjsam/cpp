#include "student.h"

Student::Student() : Person(), gpa(0.0) // invocation 호출
{
}

Student::Student(long identity, double gpa) : Person(identity), gpa(gpa) // invocation 호출
{
}

void Student::set(int identity, double gpa)
{
    Person::setId(identity); // delegation(위임)
    //this->identity = identity; //protected 변수면 자식 클래스에서 다음과 같이 직접 접근 가능하다.
    this->gpa = gpa;
}

void Student::setGPA(double gp)
{
    gpa = gp;
    assert(gpa >= 0 && gpa <= 4.5);
}

double Student::getGPA() const
{
    return gpa;
}
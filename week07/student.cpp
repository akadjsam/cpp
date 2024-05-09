#include "student.h"

Student::Student() : Person(), gpa(0.0) // invocation ȣ��
{
}

Student::Student(long identity, double gpa) : Person(identity), gpa(gpa) // invocation ȣ��
{
}

void Student::set(int identity, double gpa)
{
    Person::setId(identity); // delegation(����)
    //this->identity = identity; //protected ������ �ڽ� Ŭ�������� ������ ���� ���� ���� �����ϴ�.
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
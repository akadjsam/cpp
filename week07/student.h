#pragma once
#include "person.h"

class Student : public Person //�θ�Ŭ���� ����� public ������� ���������� �ʾƵ� ����� �� ����
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

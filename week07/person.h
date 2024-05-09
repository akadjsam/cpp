#pragma once
#include <assert.h>
class Person
{
private:
    //protected:
    long identity;
public:
    Person();
    Person(long identity);
    void setId(long identity);
    long getId() const;
};
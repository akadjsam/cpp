#include "person.h"

Person::Person() : identity(0) {

}
Person::Person(long identity) : identity(identity) {

}
void Person::setId(long id)
{
    identity = id;
    assert(identity >= 100000000 && identity <= 999999999);
}

long Person::getId() const
{
    return identity;
}
#include "pch.h"

#include "Person.h"

void Person::Greet() const
{
    cout << "My name is " << this->Name
        << " and I am " << this->Age << " years old."
        << endl;
}

int Person::GetLifeExpectancy()
{
    return LifeExpectancy;
}

// This is how you initialise a static member in C++
int Person::LifeExpectancy = 80;
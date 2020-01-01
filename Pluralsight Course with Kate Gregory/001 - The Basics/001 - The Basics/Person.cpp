#include "Person.h"
#include <iostream>

Person::Person() : ArbitraryNumber(0)
{
    std::cout << "Default constructing: " << FirstName << " " << LastName << std::endl;
}

Person::Person(std::string firstName, std::string lastName, int arbitraryNumber)
    : FirstName(firstName), LastName(lastName), ArbitraryNumber(arbitraryNumber)
{
    std::cout << "Constructing: " << FirstName << " " << LastName << std::endl;
}

Person::~Person()
{
    std::cout << "Destructing: " << FirstName << " " << LastName << std::endl;
}

std::string Person::GetName()
{
    return FirstName + " " + LastName;
}

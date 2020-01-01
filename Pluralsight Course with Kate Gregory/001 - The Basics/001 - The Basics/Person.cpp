#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;

Person::Person() : ArbitraryNumber(0)
{
    cout << "Default constructing: " << FirstName << " " << LastName << endl;
}

Person::Person(std::string firstName, std::string lastName, int arbitraryNumber)
    : FirstName(firstName), LastName(lastName), ArbitraryNumber(arbitraryNumber)
{
    cout << "Constructing: " << FirstName << " " << LastName << endl;
}

Person::~Person()
{
    cout << "Destructing: " << FirstName << " " << LastName << endl;
}

std::string Person::GetName()
{
    return FirstName + " " + LastName;
}

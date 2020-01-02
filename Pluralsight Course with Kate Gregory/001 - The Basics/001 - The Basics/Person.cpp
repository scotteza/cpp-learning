#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Person::Person() : ArbitraryNumber(0)
{
    cout << "Default constructing: " << FirstName << " " << LastName << endl;
}

Person::Person(string firstName, string lastName, int arbitraryNumber)
    : FirstName(firstName), LastName(lastName), ArbitraryNumber(arbitraryNumber)
{
    cout << "Constructing: " << FirstName << " " << LastName << endl;
}

Person::~Person()
{
    cout << "Destructing: " << FirstName << " " << LastName << endl;
}

string Person::GetName() const
{
    return FirstName + " " + LastName;
}

bool Person::operator<(Person const& p) const
{
    return ArbitraryNumber < p.ArbitraryNumber;
}

bool Person::operator<(const int i) const
{
    return ArbitraryNumber < i;
}

bool operator<(const int i, Person const& p)
{
    return i < p.GetNumber();
}

#include "Person.h"

Person::Person(std::string firstName, std::string lastName, int arbitraryNumber)
    :FirstName(firstName), LastName(lastName), ArbitraryNumber(arbitraryNumber)
{
}

std::string Person::GetName()
{
    return FirstName + " " + LastName;
}

#pragma once

#include <string>

class Person
{
private:
    std::string FirstName;
    std::string LastName;
    int ArbitraryNumber;
public:
    Person(std::string firstName, std::string lastName, int arbitraryNumber);
    Person();
    ~Person();
    std::string GetName();
};

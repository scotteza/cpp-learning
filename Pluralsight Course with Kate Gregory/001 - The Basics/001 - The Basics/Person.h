#pragma once

#include <string>

class Person
{
private:
    std::string FirstName;
    std::string LastName;
    int ArbitraryNumber;

    friend bool operator<(int i, Person const& p);
public:
    Person(std::string firstName, std::string lastName, int arbitraryNumber);
    Person();
    ~Person();
    std::string GetName() const;
    int GetNumber()const { return ArbitraryNumber; }
    void SetNumber(const int number) { ArbitraryNumber = number; }
    bool operator<(Person const& p) const;
    bool operator<(int i) const;
};
bool operator<(int i, Person const& p);

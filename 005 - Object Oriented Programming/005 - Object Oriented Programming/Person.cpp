#include "pch.h"
#include "Person.h"

using namespace  std;

Person::Person(const int age, const string name, const int sex)
    : Age(age), Name(name), Sex(sex)
{
    HomeAddress = nullptr;
}

Person::Person(const int age, const string name, const int sex, const int houseNumber, const string streetName, const string city)
    : Person(age, name, sex)
{
    if (HomeAddress != nullptr)
    {
        delete HomeAddress;
    }

    HomeAddress = new Address(houseNumber, streetName, city);
}

Person::Person(const Person& p)
    : Person(p.Age, p.Name, p.Sex)
{
    Address* a = p.HomeAddress;
    HomeAddress = new Address(
        a->HouseNumber,
        a->StreetName,
        a->City
    );
}

Person::~Person()
{
    if (HomeAddress != nullptr)
    {
        delete HomeAddress;
        HomeAddress = nullptr;
    }
}

void Person::Greet() const
{
    cout << "My name is " << this->Name
        << " and I am " << this->Age << " years old."
        << endl;

    if (HomeAddress)
    {
        cout << "I live at " << HomeAddress->HouseNumber << " " << HomeAddress->StreetName << ", " << HomeAddress->City << "." << endl;
    }
}

int Person::GetLifeExpectancy()
{
    return LifeExpectancy;
}

// This is how you initialise a static member in C++
int Person::LifeExpectancy = 80;
#pragma once

#include "Address.h"

using namespace std;

class Person
{
private:
    static int LifeExpectancy;

protected:
    int SocialSecurityNumber;

public:
    const static int Female = 0;
    const static int Male = 1;

    int Age;
    string Name;
    int Sex;
    Address* HomeAddress;

    Person(int age, string name, int sex);
    Person(int age, string name, int sex, int houseNumber, string streetName, string city);
    Person(const Person& p);
    ~Person();

    virtual void Greet();

    static int GetLifeExpectancy();
};


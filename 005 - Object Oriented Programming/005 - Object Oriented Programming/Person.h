#pragma once

#include "Address.h"

using namespace std;

class Person
{
    static int LifeExpectancy;

public:
    const static int Female = 0;
    const static int Male = 1;

    int Age;
    string Name;
    int Sex;
    Address *HomeAddress;

    Person(int age, string name, int sex);
    Person(int age, string name, int sex, int houseNumber, string streetName, string city);
    Person(const Person& p);
    ~Person();

    void Greet() const;

    static int GetLifeExpectancy();
};


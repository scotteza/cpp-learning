#pragma once

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

    void Greet() const;

    static int GetLifeExpectancy();
};


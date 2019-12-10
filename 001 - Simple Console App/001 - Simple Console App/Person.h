#pragma once

#include "stdafx.h"

class Person
{
public:
    Person();
    ~Person();

    string Name;
    // Specifying int, long etc. width is a good idea
    int32_t Age;
};

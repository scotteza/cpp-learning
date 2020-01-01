#pragma once
#include "Person.h"
#include <string>

class Tweeter :
    public Person
{
private:
    std::string TwitterHandle;
public:
    Tweeter(std::string firstName,
        std::string lastName,
        int arbitraryNumber,
        std::string twitterHandle);
    ~Tweeter();
};

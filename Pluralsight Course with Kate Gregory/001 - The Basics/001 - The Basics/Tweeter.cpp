#include "Tweeter.h"
#include <iostream>

Tweeter::Tweeter(std::string firstName, std::string lastName, int arbitraryNumber, std::string twitterHandle)
    : Person(firstName, lastName, arbitraryNumber),
    TwitterHandle(twitterHandle)
{
    std::cout << "Constructing Tweeter: " << TwitterHandle << std::endl;
}

Tweeter::~Tweeter()
{
    std::cout << "Destructing Tweeter: " << TwitterHandle << std::endl;
}

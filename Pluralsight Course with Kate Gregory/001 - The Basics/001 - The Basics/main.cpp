#include "Person.h"

#include <iostream>

int main()
{
    Person p1("Jane", "Smith", 123);
    {
        // Braces here are to test how scope is handled here.
        Person p2;
    }
    std::cout << "After innermost block" << std::endl;
    std::string name = p1.GetName();

    // int i = p1.ArbitraryNumber;

    return 0;
}

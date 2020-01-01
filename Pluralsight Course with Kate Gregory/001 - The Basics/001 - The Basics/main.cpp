#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Jane", "Smith", 123);
    {
        // Braces here are to test how scope is handled here.
        Person p2;
    }
    cout << "After innermost block" << endl;
    string name = p1.GetName();

    // int i = p1.ArbitraryNumber;

    return 0;
}

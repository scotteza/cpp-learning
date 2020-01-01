#include "Person.h"

int main()
{
    Person p1("Jane", "Smith", 123);
    Person p2;
    std::string name = p1.GetName();

    // int i = p1.ArbitraryNumber;

    return 0;
}

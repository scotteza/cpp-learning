#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Jane", "Smith", 123);
    {
        Tweeter t1("Bob", "Smith", 123, "@someone");
        std::string name = t1.GetName();
    }
    cout << "After innermost block" << endl;
    string name = p1.GetName();

    // int i = p1.ArbitraryNumber;

    return 0;
}

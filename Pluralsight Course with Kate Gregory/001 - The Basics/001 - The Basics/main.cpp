#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include "Status.h"

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

    Status s = Pending;
    s = Approved;

    FileError fe = FileError::NotFound;
    fe = FileError::Ok;

    NetworkError ne = NetworkError::Disconnected;
    ne = NetworkError::Ok;

    return 0;
}

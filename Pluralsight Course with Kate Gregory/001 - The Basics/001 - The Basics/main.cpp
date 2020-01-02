#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include "Status.h"

using std::cout;
using std::endl;
using std::string;

void LearnAboutOperatorOverloading()
{
    const Person p1("Jane", "Smith", 123);
    const Person p2("Bob", "Smith", 456);

    bool b1 = p1 < p2;
    bool b2 = p1 < 30;
    bool b3 = 300 < p1;
}

void LearnAboutObjectInitialisation()
{
    Person p1("Jane", "Smith", 123);
    {
        Tweeter t1("Bob", "Smith", 123, "@someone");
        std::string name = t1.GetName();
    }
    cout << "After innermost block" << endl;
    string name = p1.GetName();

    // int i = p1.ArbitraryNumber;
}

void LearnAboutEnums()
{
    Status s = Pending;
    s = Approved;

    FileError fe = FileError::NotFound;
    fe = FileError::Ok;

    NetworkError ne = NetworkError::Disconnected;
    ne = NetworkError::Ok;
}

int main()
{
    LearnAboutOperatorOverloading();

    LearnAboutObjectInitialisation();

    LearnAboutEnums();

    return 0;
}

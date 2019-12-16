#include "pch.h"

using namespace  std;

class Address
{
public:
    string city;

    Address(const string& city)
        : city(city)
    {
        cout << "Address created." << endl;
    }

    ~Address()
    {
        cout << "Address destroyed." << endl;
    }
};

class Person
{
public:
    Address* address;

    Person(string const& city)
    {
        address = new ::Address(city);
        cout << "Person created." << endl;
    }

    ~Person()
    {
        delete address;
        cout << "Person destroyed." << endl;
    }
};

int main()
{
    Address* a;

    {
        Person p("New York");
        a = p.address;
    }

    // "p" is out of scope here, so we get an exception
    cout << a->city << endl;

    getchar();
    return 0;
}

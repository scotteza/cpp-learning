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

class Person2
{
private:
    // Now anything outside the class cannot hit these constructors and destructors
    Person2() {}
    Person2(const Person2& _) {}
    ~Person2() {}
    int referenceCount;

public:
    // Public factory method that returns a pointer to a person
    static Person2* Create()
    {
        auto* p = new Person2;
        p->referenceCount = 1;
        return p;
    }
    void AddRef() { referenceCount++; }
    void Release()
    {
        if (--referenceCount == 0)
        {
            delete this;
        }
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

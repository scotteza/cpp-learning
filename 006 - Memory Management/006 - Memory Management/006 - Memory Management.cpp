#include "pch.h"

using namespace  std;

class Address
{
public:
    string city;

    Address()
    {

    }

    Address(const string& city)
        : city(city)
    {
        cout << city << " created." << endl;
    }

    ~Address()
    {
        cout << city << " destroyed." << endl;
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
    Person2() { referenceCount = 0; }
    Person2(const Person2& _) { referenceCount = 0; }
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









int MeaningOfLife()
{
    return 42;
}

void increment(int& x)
{
    x++;
}

// An "l-value" can appear on the left-hand side of an assignment statement
// An "r-value" can appear on the right-hand side of an assignment statement
void moveRValue()
{
    int a = 0;
    increment(a);

    // Compiler will moan here
    // increment(1);

    // This also doesn't make sense, as the meaning of life is an rvalue
    // You cannot go MeaningOfLife() = 12;
    // int& x = MeaningOfLife();

    // This is an r-value reference and is valid
    int&& y = MeaningOfLife();
    cout << y << endl;

    Address book[100];
    // This will create an Address using the constructor
    // Then it will copy it, and put the new object at book[55]
    book[55] = Address("Home");

    // You could also have an array of pointers:
    Address* book2[100];
    book2[55] = new Address("Home");

    // But, what if you want an array of references?
    // This won't work:
    // Address& book3[100];
    // But we can use move semantics to initialise without wasting memory
    book[56] = move(Address("Work"));

}

unique_ptr<Address> CreateAddress(string const& city)
{
    return unique_ptr<Address>(new Address(city));
}

void LearnAboutUniquePointers()
{
    auto a = CreateAddress("Paris");
}

int main()
{
    /*
    Address* a;

    {
        Person p("New York");
        a = p.address;
    }
    */

    // "p" is out of scope here, so we get an exception
    // cout << a->city << endl;

    LearnAboutUniquePointers();

    getchar();
    return 0;
}

#include "pch.h"

#include "Address.h"
#include "Person.h"

using namespace std;

int main(int argc, char* argv[])
{
    // A person on the stack
    const Person p1(30, "Bob Smith", Person::Male);
    p1.Greet();
    cout << endl;

    // A person on the heap
    const auto p2 = new Person(33, "Jane Smith", Person::Female);
    p2->Greet();
    delete p2;
    cout << endl;

    const auto p3 = new Person(21, "Jack Jones", Person::Male);
    auto* address = new Address(123, "Oxford Street", "London");
    p3->HomeAddress = address;
    p3->Greet();
    cout << endl;

    // Fetch a static member from the Person class
    const auto lifeExpectancy = Person::GetLifeExpectancy();
    cout << "Life expectancy = " << lifeExpectancy << " years." << endl;
    cout << endl;

    // Copy constructor
    Person p4(*p3);
    p3->HomeAddress->City = "A new city";
    cout << "p3 address = " << p3->HomeAddress->City << "." << endl;
    cout << "p4 address = " << p4.HomeAddress->City << "." << endl;

    // Pause and exit
    cout << endl << "Press return to exit." << endl;
    getchar();

    return 0;
}

#include "pch.h"

#include "Address.h"
#include "Person.h"
#include "Employee.h"
#include "EmployeeFactory.h"

using namespace std;

int main(int argc, char* argv[])
{
    // A person on the stack
    Person p1(30, "Bob Smith", Person::Male);
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

    Person p5 = *p3;
    cout << endl;

    // Inheritance
    Employee employee(33, "Bob", Person::Male, "Development");

    auto printPersonName = [](const Person& p)
    {
        cout << p.Name << endl;
    };
    printPersonName(employee);

    // Create a person reference which comes from an employee
    Person& somePerson = employee;

    // Use static cast to convert an object to a child type when we are sure of its type
    Employee& convertedFromAPerson = static_cast<Employee&>(somePerson);
    cout << convertedFromAPerson.Department << endl;
    cout << endl;

    // Virtual functions
    employee.Greet();

    cout << endl;

    // Pause and exit
    cout << endl << "Press return to exit." << endl;
    getchar();

    return 0;
}

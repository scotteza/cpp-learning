#include "pch.h"

#include "Employee.h"
#include "Address.h"
#include "Person.h"

void Employee::Greet()
{
    // Call a method on the base class
    // This is an instance call, not a static call
    // Despite the odd syntax
    Person::Greet();

    cout << "I work in " << Department << "." << endl;
}

#pragma once

#include "pch.h"

#include "Employee.h"
#include "Address.h"
#include "Person.h"

class Employee :
    public Person
{
    friend class EmployeeFactory;

private:
    int TaxId;

public:

    //Constructors
    Employee(int age, string const& name, int sex,
        string department = string())
        : Person(age, name, sex),
        Department(std::move(department))
    {

    }

    // Overrides
    void Greet() override;

    // Fields
    string Department;
};

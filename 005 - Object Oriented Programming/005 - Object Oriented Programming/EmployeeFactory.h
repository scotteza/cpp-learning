#pragma once

class EmployeeFactory
{
public:
    Employee MakeEmployee(int taxId)
    {
        Employee e(1, "Bob", Person::Male, "Support");
        e.TaxId = taxId;
    }
};
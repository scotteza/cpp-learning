#include "stdafx.h"

#include "Person.h"

void PutAPersonOnTheStack()
{
    // This calls the default constructor
    // It adds this instance to the stack (not the heap)
    Person p;
    p.Name = "Scott";
}

void PutAPersonOnTheHeap()
{
    // This puts the instance created onto the heap
    // The star tells us that this is a pointer to the address of the object
    Person* p = new Person;
    p->Name = "Scott";
}

void ProcessPersonAsACopy(Person p)
{
    cout << "Passed-in person's name: ";
    cout << p.Name << endl;

    cout << "Changing person's name..." << endl;

    p.Name = "Name 2";

    cout << "Changed person name: ";
    cout << p.Name << endl;
}

void PassACopyOfAPersonToAFunction()
{
    cout << "Creating person..." << endl;
    Person p;

    cout << "Setting person's name..." << endl;
    p.Name = "Name 1";

    cout << "Person's name pre-method call: ";
    cout << p.Name << endl;

    // This will create a copy of the person and send that to the function "ProcessPersonAsACopy"
    // i.e. it will NOT pass a reference to the object "p" to the function "ProcessPersonAsACopy"
    ProcessPersonAsACopy(p);

    cout << "Person's name post-method call: ";
    cout << p.Name << endl;
}

void ProcessAPersonAsAReference(Person* p)
{
    cout << "Passed-in person's name: ";
    cout << p->Name << endl;

    cout << "Changing person's name..." << endl;

    p->Name = "Name 2";

    cout << "Changed person name: ";
    cout << p->Name << endl;
}

void PassPersonReferenceToAFunction()
{
    cout << "Creating person..." << endl;
    Person p;

    cout << "Setting person's name..." << endl;
    p.Name = "Name 1";

    cout << "Person's name pre-method call: ";
    cout << p.Name << endl;

    // This will pass a reference to the created person to a function
    ProcessAPersonAsAReference(&p);

    cout << "Person's name post-method call: ";
    cout << p.Name << endl;
}

int main()
{
    /*
     *PutAPersonOnTheStack();
    PutAPersonOnTheHeap();
    */

    cout << "----------------------------------------" << endl;
    cout << "Passing copies of objects" << endl;
    cout << "----------------------------------------" << endl;
    PassACopyOfAPersonToAFunction();

    cout << endl << endl;

    cout << "----------------------------------------" << endl;
    cout << "Passing object references" << endl;
    cout << "----------------------------------------" << endl;
    PassPersonReferenceToAFunction();

    cout << endl << endl;
    system("PAUSE");

    return 0;
}

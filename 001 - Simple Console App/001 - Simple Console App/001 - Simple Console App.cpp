#include "Person.h"

int main()
{
    // This calls the default constructor
    // It adds this instance to the stack (not the heap)
    Person p1;

    // This puts the instance created onto the heap
    // The star tells us that this is a pointer to the address of the object
    Person *p2 = new Person;

    return 0;
}

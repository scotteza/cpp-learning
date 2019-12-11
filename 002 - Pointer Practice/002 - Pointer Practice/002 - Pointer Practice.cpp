// This code is based on the video found here: https://www.youtube.com/watch?v=sxHng1iufQE

#include <iostream>

using namespace  std;

int main()
{
    // Create an int pointer named ptr
    // This holds the address of the thing it is pointing to
    // Initially it will be assigned a random value, possibly zero
    int* ptr;

    // Create a variable
    // This will be assigned a memory address e.g. 0XA
    int var = 7;

    // Create a variable
    // This will be assigned a memory address e.g. 0XB
    int foo = 21;

    // Set ptr to the address of var
    // This places the address inside the pointer
    ptr = &var;
    cout << "ptr points to memory address " << ptr << endl;

    // De-reference the pointer
    int valueThatPtrPointsTo = *ptr;
    cout << "The value that ptr points to is " << valueThatPtrPointsTo << endl;

    cout << endl << "Changing ptr to point to foo" << endl << endl;

    // Now point ptr to the address of foo
    ptr = &foo;
    cout << "ptr now points to memory address " << ptr << endl;
    cout << "The value that ptr points to is now " << *ptr << endl << endl;

    // Create a reference that points to var
    int& ref = var;
    cout << "ref is equal to" << ref << endl;
    ptr = &ref;
    cout << "ptr now points to memory address " << ptr << endl;
    cout << "The value that ptr points to is now " << *ptr << endl << endl;

    cout << endl << endl;
    system("PAUSE");

    return 0;
}


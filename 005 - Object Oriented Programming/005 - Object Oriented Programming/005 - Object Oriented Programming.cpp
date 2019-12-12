#include "pch.h"

#include "Person.h"

using namespace std;

int main(int argc, char* argv[])
{
    // A person on the stack
    Person p1;
    p1.Name = "Bob Smith";
    p1.Age = 30;
    p1.Sex = Person::Male;

    p1.Greet();

    // A person on the heap
    auto p2 = new Person;
    p2->Name = "Jane Smith";
    p2->Age = 33;
    p2->Sex = Person::Female;

    auto lifeExpectancy = Person::GetLifeExpectancy();
    cout << "Life expectancy = " << lifeExpectancy << " years." << endl;

    p2->Greet();

    delete p2;

    cout << endl << "Press return to exit." << endl;
    getchar();

    return 0;
}

#include "pch.h"
//

namespace life
{
    auto Meaning = 42;
    auto* PointerToMeaning = &Meaning;
    auto& ReferenceToMeaning = Meaning;
}

inline auto Add(int a, int b)-> int;
auto Increment(int& a)-> void;

void LearnAboutTheStackAndTheHeap();

int main(int argc, char* argv[])
{
    using namespace std;

    using life::Meaning;

    cout << "Hello World!" << endl;

    cout << Meaning << " takes up " << sizeof(Meaning) << " bytes." << endl;

    cout << "Changing the value of Meaning using a pointer..." << endl;
    *life::PointerToMeaning = 43;
    cout << "Meaning is now equal to " << Meaning << endl;

    cout << "Changing the value of Meaning using a reference..." << endl;
    life::ReferenceToMeaning = 44;
    cout << "Meaning is now equal to " << Meaning << endl;

    cout << endl;

    cout << "Argument count: " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    cout << endl;

    cout << "1 + 2 = " << Add(1, 2) << endl;

    cout << endl;

    auto a = 41;
    cout << "a = " << a << endl;
    cout << "Adding 1 to a..." << endl;
    Increment(a);
    cout << "a = " << a << endl;

    cout << endl << "Press return to exit." << endl;

    LearnAboutTheStackAndTheHeap();

    getchar();

    return 0;
}

void Something()
{
    using namespace std;
    cout << "Something";
}

void SomethingElse()
{
    std::cout << "Something else";
}

auto Increment(int &a)-> void
{
    a++;
}

void LearnAboutTheStackAndTheHeap()
{
    // This will go on the stack
    // And will be cleaned up when we exit this scope
    // // But, remember stack size is limited
    std::string s("hello");

    // The "new" keyword puts an object on the heap
    // And returns a pointer to that object
    // This is not de-allocated when we exit this scope
    // And so we will have a memory leak here
    // Until we call "delete t"
    std::string* t = new std::string("world");
    delete t;

    // How to remove an array from the heap
    int* values = new int[128];
    delete[] values;
}

inline auto Add(const int a, const int b)-> int
{
    return a + b;
}

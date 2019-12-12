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

void LearnAboutLambdaFunctions();

void LearnAboutNamespacesAndTheirScoping()
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
}

void LearnAboutArguments(int argc, char** argv)
{
    using namespace std;

    cout << endl;

    cout << "Argument count: " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }
}

void LearnAboutPassingParametersAsReferences()
{
    using namespace std;

    auto a = 41;
    std::cout << "a = " << a << endl;
    std::cout << "Adding 1 to a..." << endl;
    Increment(a);
    std::cout << "a = " << a << endl;
}

void LearnAboutCallingFunctions()
{
    using namespace std;

    cout << "1 + 2 = " << Add(1, 2) << endl;
}

void LearnAboutEnumerations();

void LearnAboutUnions();

int main(int argc, char* argv[])
{
    using namespace std;

    LearnAboutNamespacesAndTheirScoping();
    LearnAboutArguments(argc, argv);
    LearnAboutCallingFunctions();
    LearnAboutPassingParametersAsReferences();
    LearnAboutTheStackAndTheHeap();
    LearnAboutLambdaFunctions();
    LearnAboutEnumerations();
    LearnAboutUnions();

    cout << endl << "Press return to exit." << endl;
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

auto Increment(int& a)-> void
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

void LearnAboutLambdaFunctions()
{
    using namespace std;

    auto x = 4;
    const auto doubleValue = [](int z) {return z * 2; };

    cout << x << " * 2 = " << doubleValue(x) << endl;

    int y = 5;
    // [=] = capture everything by value. Pass it by value AT THE TIME THE LAMBDA IS CREATED
    // [&] = capture everything by reference
    // [x, &y] = capture x by value and y by reference
    // [&, z] = capture everything by reference, but z by value
    auto increaseByY = [&y](int z) {return z + y; };
    cout << "4 + y = " << increaseByY(4) << endl;
    y = 100;
    // Note the result here if you change the lambda to take in "y" instead of "&y"
    cout << "4 + y = " << increaseByY(4) << endl;
}

void LearnAboutEnumerations()
{
    enum Color
    {
        Red,
        Green,
        Blue
    };

    enum class Color2 : short
    {
        Red = 1,
        Green = 2,
        Blue = 27
    };

    auto c = Color::Red;

    auto c2 = Color2::Blue;
    // Can't do thjis
    // int j = c2;
}

// A union is a user-defined type in which all members share the same memory location (MSDN)
void LearnAboutUnions()
{
    union Data
    {
        int SomeInt;
        float SomeFloat;
        char* SomeText;
    };

    Data d;
    d.SomeFloat = 0.5f;
}

inline auto Add(const int a, const int b)-> int
{
    return a + b;
}

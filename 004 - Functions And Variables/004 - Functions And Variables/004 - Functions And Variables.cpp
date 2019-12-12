#include "pch.h"
#include <vector>

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

void LearnAboutStructs();

void LearnAboutIterating();

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
    LearnAboutStructs();
    LearnAboutIterating();

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
    // // The brackets are called a "capture list"
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
    // Can't do this
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

void LearnAboutStructs()
{
    struct Size
    {
        int Width;
        int Height;
    };

    Size s{ 4,2 };
}

void LearnAboutIterating()
{
    using namespace  std;

    int a[]{ 1,2,3,4 };

    // Traditional for loop
    for (auto i = 0; i < 4; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    // Fancy modern C++ for loop
    for (auto i : a)
    {
        cout << i << "\t";
    }
    cout << endl;

    // Loop using pointer arithmetic
    for (int* p = a, *e = a + 4; p != e; ++p)
    {
        cout << *p << "\t";
    }
    cout << endl;


    // Pointer to the start of the array
    auto beginningOfArray = begin(a);
    // Pointer to the end of the array
    const auto endOfArray = end(a);
    for (; beginningOfArray != endOfArray; beginningOfArray++)
    {
        cout << *beginningOfArray << "\t";
    }
    cout << endl;





    vector<int> v{ 5,6,7,8 };
    // This gives us an iterator
    auto bv = begin(v);
    // This gives us the same thing
    auto bv2 = v.begin();

    // Constant iterator (cannot set the pointer value)
    // So you cannot go *vectorConstIterator = 3;
    auto vectorConstIterator = v.cbegin();

    // Get the reverse beginning iterator and print
    for (auto i = v.rbegin(); i != v.rend(); ++i)
    {
        cout << *i << "\t";
    }
    cout << endl;
}

inline auto Add(const int a, const int b)-> int
{
    return a + b;
}

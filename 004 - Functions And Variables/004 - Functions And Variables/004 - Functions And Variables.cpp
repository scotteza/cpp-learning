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

inline auto Add(const int a, const int b)-> int
{
    return a + b;
}

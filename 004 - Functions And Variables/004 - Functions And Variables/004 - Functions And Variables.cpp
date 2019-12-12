#include "pch.h"
using namespace std;

namespace life
{
    auto Meaning = 42;
    auto* PointerToMeaning = &Meaning;
    auto& ReferenceToMeaning = Meaning;
}

int main()
{
    using life::Meaning;

    cout << "Hello World!" << endl;

    cout << Meaning << " takes up " << sizeof(Meaning) << " bytes." << endl;

    cout << "Changing the value of Meaning using a pointer..." << endl;
    *life::PointerToMeaning = 43;
    cout << "Meaning is now equal to " << Meaning << endl;

    cout << "Changing the value of Meaning using a reference..." << endl;
    life::ReferenceToMeaning = 44;
    cout << "Meaning is now equal to " << Meaning << endl;

    cout << endl << "Press return to exit." << endl;

    getchar();

    return 0;
}

#include <iostream>
#include <cassert>
#include "../StaticLib/Mathematics.h"
#include "../MathLibrary/MathLibrary.h"

using namespace std;

// When we include this, the linker includes the implementation for us
#include "foo.h"

#if _DEBUG
void Foo()
{
    cout << "We are in debug mode!" << endl;
}
#endif

#define MUL(a,b) a*b

void CallAnExternalLibrary()
{
    cout << "21 * 2 = " << Multiply(21, 2) << endl;
}

int main()
{
    assert(MUL(2, 4) == 8);

    int x = 1;
    int y = Add1(x);

    // This will fail as it substitutes values in to the macro
    // So, MUL(2, 3 + 1) will get substituted for 2 * 3 + 1
    // assert(MUL(2, 3 + 1) == 8);

    cout << "Hello, C++" << endl;

    Foo();

    cout << "20 + 22 = " << Add(20, 22) << endl;

    CallAnExternalLibrary();

    getchar();

    return 0;
}

#include <iostream>
#include <cassert>
using namespace std;

#if _DEBUG
void Foo()
{
    cout << "We are in debug mode!" << endl;
}
#endif

#define MUL(a,b) a*b

int main()
{
    assert(MUL(2, 4) == 8);

    // This will fail as it substitutes values in to the macro
    // So, MUL(2, 3 + 1) will get substituted for 2 * 3 + 1
    // assert(MUL(2, 3 + 1) == 8);

    cout << "Hello, C++" << endl;

    Foo();

    getchar();

    return 0;
}

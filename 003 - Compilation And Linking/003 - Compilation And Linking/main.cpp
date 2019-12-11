#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, C++" << endl;

#if _DEBUG
    cout << "We are in debug mode!" << endl;
#endif

    getchar();

    return 0;
}

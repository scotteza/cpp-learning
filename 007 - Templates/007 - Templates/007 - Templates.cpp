#include "pch.h"

using namespace  std;

typedef pair<int, int> IntPair;
typedef tuple<int, int, int> TripleInt;

IntPair SumAndProduct(int a, int b)
{
    return IntPair(a + b, a * b);
}

TripleInt SumAndProductAndAverage(int a, int b, int c)
{
    TripleInt t{ a + b + c, a * b * c , (a + b + c) / 3 };
    return t;
}

void LearnAboutConsumingTemplates()
{
    int a = 2;
    int b = 3;

    auto result = SumAndProduct(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Sum = " << result.first << endl;
    cout << "Product = " << result.second << endl;

    int c = 4;

    auto result2 = SumAndProductAndAverage(a, b, c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "Sum = " << get<0>(result2) << endl;
    cout << "Product = " << get<1>(result2) << endl;
    cout << "Average = " << get<2>(result2) << endl;
}

int main()
{

    LearnAboutConsumingTemplates();

    getchar();
    return 0;
}

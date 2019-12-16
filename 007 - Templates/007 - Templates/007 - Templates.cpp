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

template<typename T1, typename T2, typename T3>
struct Triple
{
    T1 first;
    T2 second;
    T3 third;


    Triple(const T1& first, const T2& second, const T3& third)
        : first(first),
        second(second),
        third(third)
    {
    }
};

typedef Triple<int, int, int> TripleInt2;

TripleInt2 SumAndProductAndAverage2(int a, int b, int c)
{
    const TripleInt2 t(a + b + c, a * b * c, (a + b + c) / 3);
    return t;
}

void LearnAboutConsumingTemplates()
{
    const auto a = 2;
    const auto b = 3;

    const auto result = SumAndProduct(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Sum = " << result.first << endl;
    cout << "Product = " << result.second << endl;

    cout << endl;

    const auto c = 4;

    auto result2 = SumAndProductAndAverage(a, b, c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "Sum = " << get<0>(result2) << endl;
    cout << "Product = " << get<1>(result2) << endl;
    cout << "Average = " << get<2>(result2) << endl;

    cout << endl;
}

void LearnAboutCreatingTemplateClasses()
{
    const auto a = 2;
    const auto b = 3;
    const auto c = 4;

    auto result2 = SumAndProductAndAverage2(a, b, c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "Sum = " << result2.first << endl;
    cout << "Product = " << result2.second << endl;
    cout << "Average = " << result2.third << endl;

    cout << endl;
}







template<typename T1, typename T2, typename T3>
Triple<T1, T2, T3> SumProductAverage3(const T1& a, const T2& b, const T3& c)
{
    return Triple<T1, T2, T3>(a + b + c, a * b * c, (a + b + c) / 3);
}

void LearnAboutTemplateFunctions()
{
    const int a = 14;
    const double b = 5.0;
    const float c = -3.5f;

    auto result = SumProductAverage3(a, b, c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "Sum = " << result.first << endl;
    cout << "Product = " << result.second << endl;
    cout << "Average = " << result.third << endl;

    cout << endl;
}

int main()
{
    LearnAboutConsumingTemplates();

    LearnAboutCreatingTemplateClasses();

    LearnAboutTemplateFunctions();

    getchar();
    return 0;
}

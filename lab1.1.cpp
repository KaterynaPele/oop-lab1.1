#include <iostream>
#include "Combination.h"

using namespace std;

Combination makeCombination(int k, int n)
{
    Combination c;
    if (!c.Init(k, n))
    {
        cout << "Wrong arguments!" << endl;
        exit(1);
    }
    return c;
}

int main()
{
    Combination c1;
    c1.Read();
    c1.Display();
    cout << "C(n, k) = " << c1.combination() << endl;

    cout << endl;

    Combination c2 = makeCombination(3, 7);
    c2.Display();
    cout << "C(n, k) = " << c2.combination() << endl;

    return 0;
}
#include "Combination.h"
#include <iostream>

using namespace std;

// Отримання значення k
int Combination::GetFirst() const
{
    return first;
}

// Отримання значення n
int Combination::GetSecond() const
{
    return second;
}

// Встановлення k (k > 0 і k < n)
bool Combination::SetFirst(int value)
{
    if (value > 0 && value < second)
    {
        first = value;
        return true;
    }
    else
    {
        return false;
    }
}

// Встановлення n (n > k)
bool Combination::SetSecond(int value)
{
    if (value > first)
    {
        second = value;
        return true;
    }
    else
    {
        return false;
    }
}

bool Combination::Init(int k, int n) //об'єднує перевірки
{
    second = n;                 // потрібно для перевірки k < n
    return SetFirst(k) && SetSecond(n);
}

void Combination::Read() //користувач вводить дані поки вони не стануть коректними
{
    int k, n;
    do
    {
        cout << "Enter k: ";
        cin >> k;
        cout << "Enter n: ";
        cin >> n;
    } while (!Init(k, n));
}

void Combination::Display() const
{
    cout << "k = " << first << ", n = " << second << endl;
}

//без факторіалів, щоб уникнути переповнення
long long Combination::combination() const
{
    long long result = 1;
    for (int i = 1; i <= first; i++)
    {
        result = result * (second - first + i) / i;
    }
    return result;
}

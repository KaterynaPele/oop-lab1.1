#pragma once

class Combination
{
private:
    int first;    // k – кількість елементів у сполученні
    int second;   // n – загальна кількість елементів

public:
    // Методи доступу (тільки зчитування)
    int GetFirst() const;
    int GetSecond() const;

    // Методи запису з перевіркою коректності
    bool SetFirst(int value);
    bool SetSecond(int value);

    // Метод ініціалізації
    bool Init(int k, int n);

    // Введення та виведення
    void Read();
    void Display() const;

    // Обчислення числа сполучень C(n, k)
    long long combination() const;
};

// Зовнішня функція створення об'єкта
Combination makeCombination(int k, int n);
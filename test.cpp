#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 5.0; // Лучше явно указывать на десятичную дробь (double)
    double eps = 0.00001;
    double rez = 0.0;
    int iter = 0;

    cout << "Initial x: " << x << endl;

    while (fabs(rez - x) > eps && iter < 20000)
    {
        rez = x;

        // Измененная проверка для избежания деления на ноль
        if (fabs(0.35) < eps)
        {
            cerr << "Error: Division by zero." << endl;
            return 1; // Вернем код ошибки
        }

        // Измененная формула расчета
        x = (-3 * sin(sqrt(x)) + 3.8) / 0.35;

        iter++;
    }

    // Вывод результатов
    if (iter == 20000)
    {
        cerr << "Error: Iteration limit reached." << endl;
        return 1; // Вернем код ошибки
    }

    cout << "Number of iterations: " << iter << endl;
    cout << "Result: " << x << endl;

    return 0;
}

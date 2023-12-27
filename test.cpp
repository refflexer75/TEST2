#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 5;
    double eps = 0.00001;
    double rez = 0;
    int iter = 0;
    cout << "x0= " << x << endl;
    while (fabs(rez - x) > eps && iter<20000)
    {
        rez = x;
        x = (-3*sin(sqrt(x)) + 3.8)/0.35;
        iter++;
    }
    cout << iter << " iterations" << endl;
    cout << x << " result" << endl;
    return 0;
}
#include <cmath>
#include <iostream>

using namespace std;

double k(const double x, const double y);

int main()
{
    double p, q;

    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;


    double g = pow(k(1 + p, q * q), 2) - k(q * p, 1);
    double r = 1 + k(p * p, q);

    if (g == 0) {
        cout << endl;
    }
    else {
        double m = g / r;
        cout << "m = " << m << endl;
    }

    return 0;
}

double k(const double x, const double y)
{
    return (sin(x) / (y * y)) + (cos(y) / (x * x));
}

#include <iostream>
#include <cmath>

#define pi 3.1415926535897
using namespace std;

int main()
{
    float a, b, c, p, A1, A2, A3, x = 4.55555;
    while (cin >> a && a > 0)
    {
        cin >> b >> c;
        p = (a + b + c) / 2;
        A1 = sqrt(p * (p - a) * (p - b) * (p - c));
        A2 = pi * pow(A1 / p, 2);
        A1 -= A2;
        A3 = pi * pow( (a*b*c)/ ( (A2+A1)*4), 2);
        A3 -= (A1 + A2);
        cout << fixed;
        cout.precision(5);
        cout << A3 << " " << A1 << " " << A2 << endl << endl;
        A3 = (int)(A3*10000);
        int a2 =  A2 * 100000;
        A2 = (int)(A2*10000);
        A1 = (int)(A1*10000);
        cout << A2 << " " << a2 << " "  << a2 -A2/10 << endl << endl;
        A1 /= 10000;
        A2 /= 10000;
        A3 /= 10000;
        cout.precision(4);
        cout << A3 << " " << A1 << " " << A2 << endl;
    }
    return 0;
}
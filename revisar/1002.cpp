#include <iostream>

using namespace std;

int main()
{
    double r, p = 3.14159;
    cin >> r;
    cout.precision(4);
    cout << fixed;
    cout << "A=" << p*r*r << endl;
}
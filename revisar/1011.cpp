#include <iostream>

using namespace std;

int main()
{
    float r;
    cin >> r;
    cout.precision(3);
    cout << fixed;
    cout << "VOLUME = " << (4/3.0)*3.14159*r*r*r << endl;
    
    return 0;
}
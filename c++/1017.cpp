#include <iostream>

using namespace std;

int main()
{
    int t, v;
    cin >> t >> v;

    cout.precision(3);
    cout << fixed;
    cout << (t*v)/12.0 << endl;
    
    return 0;
}
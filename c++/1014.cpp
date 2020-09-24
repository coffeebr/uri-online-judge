#include <iostream>

using namespace std;

int main()
{
    int x;
    float y;
    cin >> x >> y;
    
    cout.precision(3);
    cout << fixed;
    cout << x/y << " km/l\n";
    
    return 0;

}
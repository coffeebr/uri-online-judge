#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float p1[2], p2[2];
    cin >> p1[0] >> p1[1] >> p2[0] >> p2[1];

    cout.precision(4);
    cout << fixed;
    cout << sqrt(pow(p2[0]-p1[0], 2) + pow(p2[1] - p1[1], 2)) << endl;
    
    return 0;
    
}
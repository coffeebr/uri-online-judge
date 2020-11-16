#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, M1, M2;
    cin >> a >> b >> c;
    M1 = (a+b+abs(a-b))/2;
    M2 = (M1+c+abs(M1-c))/2;
    cout << M2 << " eh o maior" << endl;

    return 0;

}

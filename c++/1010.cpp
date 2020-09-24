#include <iostream>

using namespace std;

int main()
{
    int n;
    float s, h;
    cin >> n >> h >> s;
    cout << "NUMBER = " << n;
    cout.precision(2);
    cout << fixed;
    cout << "\nSALARY = U$ " << s*h << endl;
}

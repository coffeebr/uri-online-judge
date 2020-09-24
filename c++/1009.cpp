#include <iostream>

using namespace std;

int main()
{
    string nome;
    float s, v;
    cin >> nome >> s >> v;
    cout.precision(2);
    cout << fixed;
    cout << "TOTAL = R$ " << s+(v*0.15) << endl;
}

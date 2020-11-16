#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, m;
    float total, x;
    string str;
    map<string, float> list;
    cin >> n;
    while (n--)
    {
        total = 0;
        cin >> m;
        while (m--)
        {
            cin >> str >> x;
            list[str] = x;
        }
        cin >> m;
        while (m--)
        {
            cin >> str >> x;
            total += list[str] * x;
        }
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "R$ " << total << endl;
    }
}
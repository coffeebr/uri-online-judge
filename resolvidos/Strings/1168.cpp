#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, amount;
    string str;

    cin >> n;

    while (n--)
    {
        cin >> str;
        amount = 0;
        for (char &ch : str)
        {
            switch (ch)
            {
            case '0':
            case '6':
            case '9':
                amount += 6;
                break;
            case '2':
            case '3':
            case '5':
                amount += 5;
                break;
            case '1':
                amount += 2;
                break;
            case '4':
                amount += 4;
                break;
            case '7':
                amount += 3;
                break;
            case '8':
                amount += 7;
                break;
            }
        }
        cout << amount << " leds\n";
    }
}
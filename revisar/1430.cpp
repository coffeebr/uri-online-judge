#include <iostream>

using namespace std;

int main()
{
    string str;
    int n, x;
    while (getline(cin, str) && str != "*")
    {
        n = 0;
        x = 0;
        for (int a = 0; a < str.length(); a++)
        {
            switch (int(str[a]))
            {
            case 87:
                x += 64;
                break;
            case 72:
                x += 32;
                break;
            case 81:
                x += 16;
                break;
            case 69:
                x += 8;
                break;
            case 83:
                x += 4;
                break;
            case 84:
                x += 2;
                break;
            case 88:
                x += 1;
                break;
            case 47:
                if(x == 64) n++;
                x = 0;
            default:
                break;
            }
        }
        cout << n << endl;
    }
}
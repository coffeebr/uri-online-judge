#include <iostream>

using namespace std;

int main()
{
    string str;
    int n, l, hash;
    cin >> n;
    while(n--)
    {
        cin >> l;
        hash = 0;
        for(int a = 0; a < l; a++)
        {
            cin >> str;
            for(int b = 0; b < str.size(); b++)
            {
                hash += a + b + (str[b]-65);
            }
        }
        cout << hash << endl;
    }
}
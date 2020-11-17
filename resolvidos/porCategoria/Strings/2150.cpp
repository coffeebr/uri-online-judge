#include <iostream>

using namespace std;

string function(const string &str)
{
    string repetido;
    repetido += str.back();
    for (int a = str.size() - 2; a != -1 && a - int(repetido.size()) + 1 >= 0; a--)
    {
        if (str[a] == str.back())
        {
            
            if (str.substr(a-int(repetido.size())+1, repetido.size()) == repetido)
            {
                return str.substr(0,a+1);
            }
        }
        repetido.insert(repetido.begin(), str[a]);
    }
    return str;
}

int main()
{
    ios::sync_with_stdio(false);

    string str;

    while (cin >> str)
    {
        cout << function(str) << endl;
    }
}
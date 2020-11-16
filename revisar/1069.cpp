#include <iostream>

using namespace std;

string tirarPonto(string s)
{
    string aux;
    for(int n = 0; n < s.size(); n++)
        if(s[n] != '.')
            aux += s[n];
    return aux;
}

int diamantes(string s)
{
    int dima = 0, b = 0;
    for(int a = 0; a < s.size(); a++)
    {
        if(s[a] == '<') 
        {
            if(b < a) b = a;
            while(b != s.size())
            {
                b++;
                if(s[b] == '>')
                {
                    dima++;
                    break;
                }
            }
        }
    }
    return dima;
}

int main()
{
    int n;
    string s;
    cin >> n;
    cout << s.max_size();
    while(n--)
    {
        fflush(stdin);
        cin >> s;
        s = tirarPonto(s);
        cout << diamantes(s) << endl;
    }
    return 0;
}
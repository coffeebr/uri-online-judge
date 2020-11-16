#include <iostream>

using namespace std;

int main()
{
    string str;
    ios::sync_with_stdio(false);
    bool maiuscula, minuscula, numero;
    while (getline(cin, str))
    {
        // str.size() -1
        if (str.size() < 6 || str.size() > 32)
        {
            cout << "Senha invalida.\n";
        }
        else
        {
            maiuscula = minuscula = numero = false;
            for (const char &ch : str)
            {
                if (ch >= 'A' && ch <= 'Z')
                {
                    maiuscula = true;
                    continue;
                }
                else if (ch >= 'a' && ch <= 'z')
                {
                    minuscula = true;
                }
                else if (ch >= '0' && ch <= '9')
                {
                    numero = true;
                }
                else
                {
                    maiuscula = false;
                    break;
                }
            }
            if (maiuscula && minuscula && numero)
                cout << "Senha valida.\n";
            else
                cout << "Senha invalida.\n";
        }
    }
}

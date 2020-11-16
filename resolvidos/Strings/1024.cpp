#include <iostream>

using namespace std;

void passada1(string &str)
{
    for (char &ch : str)
    {
        if ((int(ch) >= 97 && int(ch) <= 122) || (int(ch) >= 65 && int(ch) <= 90))
        {
            ch = char(int(ch) + 3);
        }
    }
}

void passada2(string &str)
{
    char aux;
    int tam = str.size() - 1;
    for (int a = 0; a < str.size() / 2; a++)
    {
        aux = str[a];
        str[a] = str[tam - a];
        str[tam - a] = aux;
    }
}

void passada3(string &str)
{
    for (int a = str.size() / 2; a < str.size(); a++)
    {
        str[a] = char(int(str[a]) - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;
    char ch;

    cin >> n;
    cin >> ws;

    while (n--)
    {
        getline(cin, str);

        passada1(str);
        passada2(str);
        passada3(str);

        cout << str << endl;
    }
}
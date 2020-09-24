#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int m, n, x;
    string str;
    map <string, int> dicionario;
    map<string, int>::iterator palavra;

    cin >> m >> n;
    for(int a = 0; a < m; a++)
    {
        cin >> str >> x;
        dicionario[str] = x;
    }
    for(int a = 0; a < n; a++)
    {
        x = 0;
        while(cin >> str && str != ".")
        {
            palavra = dicionario.find(str);
            if(palavra != dicionario.end()) x += palavra->second;
        }
        cout << x << endl;
    }
    

}
#include <iostream>
#include <map>

using namespace std;

bool comparar(string s1, string s2)
{
    bool cont = false;  
    for(int a = 0; a < s1.size(); a++)
    {
        if(s1[a] != s2[a])
        {
            if(cont) return true;
            cont = true;
        } 
    }
    return false;
}

int main()
{
    int n, m, cont;
    string  nome, assinatura;
    map<string, string> chamada;
    while(cin >> n && n != 0)
    { 
        cont = 0;
        chamada.clear();
        while(n--)
        {
            cin >> nome >> assinatura;
            chamada[nome] = assinatura;
        }
        cin >> m;
        while(m--)
        {
            cin >> nome >> assinatura;
            if(comparar(chamada[nome], assinatura)) cont++;
        }
        cout << cont << endl;

    }
}
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, q, acesso, *notas;
    while(cin >> n >> q)
    {
        notas = new int[n];
        for(int a = 0; a < n; a++) cin >> notas[a];
        sort(notas, notas + n, [](int a, int b){ return a > b; });
        
        while(q--)
        {
            cin >> acesso;
            cout << notas[acesso-1] << endl;
        }
        delete notas;
    }
}
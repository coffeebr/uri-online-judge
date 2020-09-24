#include <iostream>

using namespace std;

int main()
{
    int n, m, *classe, cont;
    pair<int, int> maior; // first = maior termo, second = posição
    cin >> n;
    while (n--)
    {
        cin >> m;
        cont = 0;
        classe = new int[m];
        for (int a = 0; a < m; ++a)
        {
            cin >> classe[a];
        }
        for (int a = 0; a < m; ++a)
        {
            maior.first = -1;
            for (int b = 0; b < m; ++b)
            {
                if (maior.first < classe[b])
                {
                    maior.first = classe[b];
                    maior.second = b;
                }
            }
            if(maior.second == a) cont++;
            classe[maior.second] = -1;
        }

        cout << cont << endl;
    }
}
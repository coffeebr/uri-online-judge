#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, aux, *fila;
    pair<int, int> *caixa, *funcionario;

    cin >> n >> m;
    fila = new int[m];
    caixa = new pair<int, int>[n];
    for (int a = 0; a < n; a++)
    {
        cin >> aux;
        caixa[a].first = 0;
        caixa[a].second = aux;
    }
    for (int a = 0; a < m; a++)
    {
        cin >> aux;
        funcionario = min_element(caixa, caixa + n, [](pair<int, int> p1, pair<int, int> p2) {
            return p1.first < p2.first;
        });
        funcionario->first += funcionario->second*aux;
    }
    cout << max_element(caixa, caixa + n, [](pair<int, int> p1, pair<int, int> p2) {
            return p1.first < p2.first;
        })->first << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, aux;
    vector<int> fila;
    vector<int>::iterator it;
    cin >> n;
    for(int a = 0; a < n; a++)
    {
        cin >> aux;
        fila.push_back(aux);
    }
    cin >> m;
    for(int a = 0; a < m; a++)
    {
        cin >> aux;
        fila.erase(
         find(fila.begin(), fila.end(), aux)
        );
    }
    for(it = fila.begin(); it != fila.end() - 1; it++) cout <<*it << " ";
    cout << *(it++) << endl;
    
}
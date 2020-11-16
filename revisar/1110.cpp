#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, *removidos;
    queue<int> fila;
    while(cin >> n && n != 0)
    {
        removidos = new int[n-1];
        for(int a = 1; a <= n; a++) fila.push(a);
        for(int a = 0; a < n-1; a++)
        {
            removidos[a] = fila.front();
            fila.pop();
            fila.push(fila.front());
            fila.pop();
        }
        cout << "Discarded cards: ";
        for(int a = 0; a < n -2;a++) cout << removidos[a] << ", ";
        cout << removidos[n-2] << "\nRemaining card: " << fila.front() << endl;
        fila.pop();
        delete removidos;
    }
}
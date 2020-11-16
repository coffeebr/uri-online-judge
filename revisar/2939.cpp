#include <iostream>

#define maxSize 1000000007

using namespace std;

int main()
{
    long long int n, pot = 1, fat = 1, fib1 = 1, fib2 = 0, fibAux;
    cin >> n;

    for(int a = 1; a <= n; a++)
    {
        fat = (a * fat) % maxSize;
        pot = (2 * pot) % maxSize;

        fibAux = fib1;
        fib1 = (fib1 + fib2) % maxSize;
        fib2 = fibAux;
    }
    cout << ( ( ( fib1 * pot ) % maxSize) * fat ) % maxSize << endl;
    return 0;
}
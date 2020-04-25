#include <iostream>

using namespace std;


void seila(int n);

int main()
{
    int n, base2 = 0, base5 = 0, fat = 1, b;
    cin >> n;

    for(int a = 2; a <= n; a++)
    {
        b = a;
        while( b % 2 == 0 )
        {
            b/=2;
            base2++;
        }
        while( b % 5 == 0)
        {
            b/=5;
            base5++;
        }
        fat*=b;
    }
    seila(6);

    cout << endl << fat << " x 2^" << base2 << " x 5^" << base5 << ".\n\n";
}

void seila(int n)
{
    for(int a = 1; a <= n; a++)
    {
        for(int b = 1; b <= 2*a-1; b++)
        {
            cout <<"*";
        }
        cout << endl;
    }
}

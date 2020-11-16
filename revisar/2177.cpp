#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int xi, yi, casos, xf, yf, t, b = 0;
    scanf("%i%i%i", &xi, &yi, &casos);
    int vet[casos];
    vet[0] = -1;
    for(int a = 1; a <= casos; a++)
    {
        scanf("%i%i%i", &xf, &yf, &t);
        xf -= xi;
        yf -= yi;
        if(  (xf * xf + yf * yf)/t < t )
        {
            vet[b] = a;
            b++;
        }
    }
    for(int a = 0; a < b-1; a++) printf("%i ", vet[a]);
    (b == 0) ? printf("%i", vet[b]) : printf("%i", vet[b - 1]);

    cout << endl;
    return 0;
}

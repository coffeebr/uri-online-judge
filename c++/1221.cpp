#include <cmath>
#include <stdio.h>

int main()
{
    int n, raiz;
    long long x;
    bool primo;

    scanf("%d", &n);

    for (int a = 0; a < n; a++)
    {
        primo = true;
        scanf("%lld", &x);
        raiz = sqrt(x);
        if (x % 2 == 0)
            primo = false;
        else
            for (int b = 3; b <= raiz; b+=2)
                if (x % b == 0)
                {
                    primo = false;
                    break;
                }

        if (primo)
            printf("%s\n", "Prime");
        else
            printf("%s\n", "Not Prime");
    }

    return 0;
}

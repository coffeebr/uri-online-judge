#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int proximoPrimo(int x)
{
    bool primo;
    int raiz;

    while(true)
    {
        x++;
        primo = true;
        raiz = sqrt(x);
        for(int b = 2; b <= raiz; b++ )
            if( x % b  == 0)
            {
                 primo = false;
                 break;
            }

        if( primo ) return raiz;
    }
}

int resolve(int x)
{
    vector<int> vec;
    int n = 1, y = x;
    while(y)
    {
        n = proximoPrimo(n);
        if(y % n == 0) vec.insert(vec.begin(), n);
        while(y % n == 0) y /= n;
        if(n == 5) y = 0;
    }
    cout << vec[0] << " " << vec.front()<< endl;
    return 1;

}

int main()
{
    int n, x;
    cin >> n;
    while(n--)
    {
        cin >> x;
        cout << resolve(x) << endl;
    }
}
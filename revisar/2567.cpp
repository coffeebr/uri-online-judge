#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, *virus, letalidade;
    while(cin >> n)
    {
        letalidade = 0;
        virus = new int[n];
        for(int a = 0; a < n; a++) cin >> virus[a];
        sort(virus, virus + n);
        n--;
        for(int a = 0; a <= n/2; a++) letalidade +=(virus[n -a] - virus[a]);
        cout << letalidade << endl;
    }
}
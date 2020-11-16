#include <iostream>

using namespace std;

int main()
{
    int n, hor = 0, ver = 0, horMax = 0, horMin = 0, verMax = 0, verMin = 0, quant = 0;
    cin >> n;
    char s[n][n];
    int safe = n;
    pair<int, int> nPode[n*n - (n-1)*(n-1)];
    for(int a = 0; a < n; a++)
        for(int b = 0; b < n; b++)
        {
            cin >> s[a][b];
            if(b == n -1 && s[a][b] == '>') { nPode[quant] = make_pair(a, b); quant++; }
            if(a == n -1 && s[a][b] == 'V') { nPode[quant] = make_pair(a, b); quant++; } 
            if(b == 0 && s[a][b] == '<')    { nPode[quant] = make_pair(a, b); quant++; }
            if(a == 0 && s[a][b] == 'A')    { nPode[quant] = make_pair(a, b); quant++; }
        }

    for(int a  = 0; a < quant; a++)
    {
        
    }

    cout << "quant: " << quant << endl;
    for(int a = 0; a < quant;  a++) cout << nPode[a].first << " " << nPode[a].second << endl;
}

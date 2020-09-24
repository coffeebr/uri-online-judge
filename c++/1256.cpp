#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, c, chave;
    vector<int>::iterator it;
    cin >> n;
    while(n--)
    {
        cin >> m >> c;
        vector<int> hash[m];
        for(int a = 0; a < c; a++)
        {
            cin >> chave;
            hash[chave%m].push_back(chave);
        }

        for(int a = 0; a < m; a++)
        {
            cout << a << " -> ";
            for(it = hash[a].begin(); it != hash[a].end(); it++)
            {
                cout << *it << " -> ";
            }
            cout << "\\\n";
        }
        if(n) cout << endl;
    }
}
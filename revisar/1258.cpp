#include <iostream>
#include <algorithm>

using namespace std;

class Camisetas{
    public:
    string nome, tamanho, cor;
    ~Camisetas(){}
};

int main()
{
    int n, a = 0;
    string str;
    Camisetas *camisetas;
    ios::sync_with_stdio(false);
    while(cin >> n && n != 0)
    {
        if(a) cout << endl;
        camisetas = new Camisetas[n];
        cin.ignore();
        for(a = 0; a < n; a++)
        {
            getline(cin,camisetas[a].nome);
            cin >> camisetas[a].cor;
            cin >> camisetas[a].tamanho;
            cin.ignore();
        }
        stable_sort(camisetas, camisetas+n, 
            [](Camisetas const &c1, Camisetas const &c2)
            {
                if(c1.cor < c2.cor) return true;
                if(c1.cor > c2.cor) return false;
                if(c1.tamanho > c2.tamanho) return true;
                if(c1.tamanho < c2.tamanho) return false;
                return (c1.nome < c2.nome);
            }

        );
        for(a = 0; a < n; a++)  cout << camisetas[a].cor << " " << camisetas[a].tamanho << " " << camisetas[a].nome << endl;
    }
}
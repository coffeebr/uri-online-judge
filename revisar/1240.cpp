#include <iostream>
#include <string>//Para as string
#include <sstream>//Para conveter número em string(stringstream)

using namespace std;

int main()
{
    int n, xTam, yTam, xInt, yInt;
    string x, y;
    stringstream s;//Variavel de conversão

    cin >> n;
    bool vet[n];
    for (int a = 0; a < n; a++)
    {
        cin >> xInt >> yInt;

        s << xInt;//s recebe o inteiro q
        x = s.str();//Recebe oque está contido na stringstream s
        s.str( string() );//Apagar o conteudo de s
        s << yInt;
        y = s.str();
        s.str( string() );

        xTam = x.size();//Tamanho da string
        yTam = y.size();

        if (xTam > yTam)
        {
            if (x.substr(xTam - yTam, xTam - 1) == y)//Compara um pedaço do final da string de mesmo tamanho que a segunda string
                vet[a] = true;
            else
                vet[a] = false;
        }
        else if (x == y) vet[a] = true;//Caso as duas sejam iguais
        else//Se a primeira for menor que a segunda
            vet[a] = false;
    }
    for (int a = 0; a < n; a++)
    {
        if (vet[a])
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;
    }
    return 0;
}

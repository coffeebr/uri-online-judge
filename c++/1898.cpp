#include <iostream>
using namespace std;

int main()
{
    string s, cpf, ss;
    long long n = 0, m = 0, p = 0, sair = 0, ponto = 0;
    char num1[60], num2[60];
    double valor, primeiro = true;
    bool ok = true;
    cin >> s >> ss;

    while(cpf.size() < 11 && n < s.size()) 
    {
        if((int)s[n] >= 48 && (int)s[n] <= 57) cpf += s[n];
        n++;
    }

    while(cpf.size() < 11){
        ok = false;
        if( (int)ss[m] >= 48 && (int)ss[m] <= 57) cpf +=ss[m];
        m++;
    }

    while(ok  && n < s.size())
    {
        if( ( (int)s[n] >= 48 && (int)s[n] <= 57) ) 
        {
            num1[p++] = s[n];
            if(ponto == 1)sair++;
        }
        if( (int)s[n] == 46 )
        {
            num1[p++] = '.';
            ponto++;

        }
        if(ponto == 2 || sair == 2) break;
        n++;
    }

    p = sair = ponto = 0;

    while(m < ss.size()){
        if( ( (int)ss[m] >= 48 && (int)ss[m] <= 57)) 
        {
            num2[p++] = ss[m];
            if(ponto == 1)sair++;
        }
        if( (int)ss[m] == 46 )
        {
            num2[p++] = '.';
            ponto++;
        }
        if(ponto == 2 || sair == 2) break;
        m++;
    }

    valor = atof(num1) + atof(num2);
    cout << fixed;
    cout.precision(2);
    cout << "cpf " << cpf << endl << valor << endl;
}
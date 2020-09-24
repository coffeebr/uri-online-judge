#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout.sync_with_stdio(false);

    vector<int> ordem;// Vetor de notas

    pair<int, int> mm;  // pair para o menor e maior termo da bateria
    pair<bool, bool> bl;// Pair para caso o menor ou maior termo da bateria precise ser buscado termo a termo na bateria

    int n, b, x, k, nb;//n = numero de notas, b = numero de notas presente na bateria, x = nota, nb = usado para armazenar (n - b) devido a grande quantidade de vezes que é utilizado este calculo  
    long long sum;//resultado final

    while (cin >> n >> b)
    {
        nb = n - b;
        sum = 0;
        mm.first = 101; //menor
        mm.second = 0;  //maior

        if (nb <= b)// Quando verdadeiro a quantidade de vezes que um numero se repete na bateria de notas não se mantem constante em nenhum intervalo
            for (int a = 1; a <= n; a++)
            {
                if (a <= nb)
                    k = a;
                else if (a > b)
                    k = n - a + 1;
                else
                    k = nb + 1;

                sum += x * k;
                ordem.push_back(x);
            }
        else
            for (int a = 1; a <= n; a++)
            {
                if (a < b)
                    k = a;
                else if (a <= nb)
                    k = b;
                else
                    k = n - a + 1;

                sum += x * k;
                ordem.push_back(x);
            }

        bl.first = bl.second = false;// Menor e Maior termo sucessivamente 

        for (int c = 0; c < b; c++)
        {
            if (ordem[c] < mm.first)
                mm.first = ordem[c];
            if (ordem[c] > mm.second)
                mm.second = ordem[c];
        }

        sum -= mm.first + mm.second;
        //primeira iteração
        for (int a = 1; a <= nb; a++)
        {
            //Para o menor termo
            if (ordem[a + b - 1] <= mm.first) //Se o menor termo inserido na bateria atual for menor que o menor termo da bateria anterior a troca sera feita
                mm.first = ordem[a + b - 1];
            else if (mm.first == ordem[a - 1]) //Caso o termo inserido não for menor verificasse se o menor termo da bateria anterior foi retirado da bateria atual
                bl.first = true;

            //O mesmo raciocínio das verificações acima, entretanto aplicadas no maior termo
            if (ordem[a + b - 1] >= mm.second)
                mm.second = ordem[a + b - 1];
            else if (mm.second == ordem[a - 1])
                bl.second = true;

            if (bl.first || bl.second)
            {
                if (bl.first)//define o menor para 101 que é 1 a mais do maior termo da entrada(100)
                    mm.first = 101;
                if (bl.second)//define o maior para 0 que é 1 a a menos que o menor termo de entrada(0)  
                    mm.second = 0;

                for (int c = a; c < b + a; c++)
                {
                    if (bl.first && ordem[c] < mm.first  )// Se bl.first(menor) = true a comparação é feita para ver se o termo da posição c é o menor até o momento
                        mm.first = ordem[c];

                    if (bl.second && ordem[c] > mm.second)// Se bl.second(maior) = true a comparação é feita para ver se o termo da posição c é o maior até o momento
                        mm.second = ordem[c];
                }
                bl.first = bl.second = false;
            } //Quando o menor ou o maior termo da bateria anterior não está presente na bateria atual e nem foi o termo adicionado
            sum -= mm.first + mm.second;
        }
        ordem.clear();
        cout << sum << endl;
    }


}
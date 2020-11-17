#include <iostream>

using namespace std;

template <class T>
class Lista
{
private:
    template <class TT>
    class Celula
    {
    public:
        Celula<TT> *prox;
        TT valor;
        Celula(TT v)
        {
            this->valor = v;
            prox = nullptr;
        }
    };
    int tamanho;
    Celula<T> *inicio;
    Celula<T> *fim;

public:
    Lista()
    {
        inicio = fim = nullptr;
        tamanho = 0;
    }

    ~Lista()
    {
        Celula<T> *aux;
        while (inicio != nullptr)
        {
            aux = inicio;
            inicio = inicio->prox;
            delete aux;
        }
    }

    int getTamanho()
    {
        return tamanho;
    }

    bool inserirnoinicio(const T &valor)
    {
        if (this->inicio == nullptr)
        { // está vazia
            this->inicio = this->fim = new Celula<T>(valor);
        }
        else
        { // já tem elementos
            Celula<T> *aux = new Celula<T>(valor);
            aux->prox = inicio;
            this->inicio = aux;
        }
        ++tamanho;
        return true;
    }

    bool inserirnofim(const T &valor)
    {
        if (this->fim == nullptr)
        {
            this->inicio = this->fim = new Celula<T>(valor);
        }
        else
        {
            this->fim->prox = new Celula<T>(valor);
            this->fim = this->fim->prox;
        }
        ++tamanho;
        return true;
    }

    bool excluirdoinicio(void)
    {
        if (this->inicio == nullptr)
        {
            return false;
        }
        else
        {
            Celula<T> *aux;
            aux = this->inicio;
            this->inicio = this->inicio->prox;
            delete aux;
            this->tamanho--;
            return true;
        }
    }

    bool excluirdofim(void)
    {
        if (this->inicio == nullptr)
        {
            return false;
        }
        else
        {
            if (this->inicio->prox == nullptr)
            { //só tem um elemento!
                delete this->inicio;
                this->inicio = this->fim = nullptr;
            }
            else
            {
                Celula<T> *aux = this->inicio;
                while (aux->prox->prox != nullptr)
                {
                    // equivalente a: while(aux->prox!=this->fim) {
                    aux = aux->prox;
                }
                delete this->fim;
                this->fim = aux;
            }
            this->tamanho--;
            return true;
        }
    }

    void mostrar()
    {
        Celula<T> *aux = this->inicio;
        while (aux != nullptr)
        {
            cout << aux->valor << " ";
            aux = aux->prox;
        }
        cout << endl;
    }
};

int main()
{
    float f1 = 1.32848, f2 = 1.9489498, f3 = 1.5;
    cout << int(f1) << " " << int(f2) << " " << int(f3) << endl;
    Lista<int> L;
    Lista<int> L2;
    Lista<string> S;
    Lista<float> *F = new Lista<float>();
    F->inserirnofim(3.14159);
    F->inserirnoinicio(2.71);
    F->mostrar();
    S.inserirnofim("Lage");
    S.inserirnoinicio("Jose");
    S.inserirnofim("Alvarenga");
    S.inserirnoinicio("Paulo");
    S.mostrar();
    cout << endl;
    L.inserirnoinicio(18);
    cout << L2.getTamanho() << endl;
    L2.inserirnoinicio(4);
    L2.inserirnoinicio(22);
    L2.inserirnoinicio(7);
    L2.excluirdofim();
    cout << L2.getTamanho() << endl;
    if (L2.inserirnofim(55))
    {
        cout << "Inseriu!" << endl;
        cout << L2.getTamanho() << endl;
    }
    else
    {
        cout << "Erro, a lista estava cheia!" << endl;
    }
    int num = 5;
    float f = 3.14;
    L.inserirnofim(80);
    L.excluirdoinicio();
    cout << "L: ";
    L.mostrar();
    cout << "L2: ";
    L2.mostrar();
    delete F;
}
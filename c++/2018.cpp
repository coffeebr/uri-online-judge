#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

#define ouro   100000000
#define prata  10000
#define bronze 1

using namespace std;

typedef pair<string,long long> pairs;
typedef map<string,long long> maps;

bool acha(vector<pairs> vet, long long ll, unsigned int &n1, unsigned int &n2){
    unsigned int iPos = 0, cont = 0;
    bool flag = true;
    for(unsigned int i=n1; i<vet.size(); i++){
        if(vet[i].second == ll){
            if(flag){
                iPos = i;
                flag = false;
            }
            cont++;
        }
    }
    if(!flag){
        n1 = iPos;
        n2 = cont;
        return true;
    }else{
        n1 = 0;
        n2 = 0;
        return false;
    }
}
void ordena(vector<pairs > &vet, unsigned int n1, unsigned int n2)
{
    reverse(vet.begin()+n1, vet.begin()+n2);
}

template<typename x, typename y>
void muda(maps &med, vector< pair<x, y>> &vec)
{
    med.clear();
    for (auto const &pair: vec) med[pair.first] = pair.second;
    vec.clear();
}

template<typename a, typename b>
vector< pair<b, a>> invert( vector< pair<a, b>> &vec)
{
    vector<pair<b, a>> vet;
    for (auto const &pair: vec) vet.emplace_back( pair.second, pair.first);
    vec.clear();
    return vet;
}

void imprime(vector<pairs> vec)
{
    long long n;
    for (auto const &pair: vec)
    {
        n = pair.second;
        cout << pair.first << " ";
        cout << (n - n % ouro) / ouro << " ";
        cout <<  (n - (n - n % ouro) - (n % prata)) / prata << " ";
        cout << n % prata;
        cout << endl;
    }
}

int main()
{
    maps med;
    vector<pairs> vec;
    string str ;

    while(getline(cin, str) && str != "EOF" )
    { 
        getline(cin, str);
        med[str] += ouro;
        getline(cin, str);
        med[str] += prata;
        getline(cin, str);
        med[str] += bronze;
    }

    copy(med.begin(), med.end(), back_inserter<vector<pairs>>(vec));

    vector<pair<long long, string>> vet = invert(vec);

    sort(vet.begin(), vet.end() );

    vec = invert(vet);

    unsigned int n1, n2, i;

    for(i=0; i<vec.size() - 1; i++){
        n1 = i;
        if(acha(vec, vec[i].second, n1, n2)){
            //cout << n1 << " " << n2 << endl;
            if(n2 > 1)
                ordena(vec, n1, (n1+n2));
            i += n2;
        }
    }
    reverse(vec.begin(), vec.end());
    cout << "Quadro de Medalhas\n";
    imprime(vec);
    return 0;
}
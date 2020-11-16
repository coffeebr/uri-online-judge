#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, bonzinho = 0, malzinho = 0;
    cin >> n;
    string str;
    string names[n];
    cin.ignore();
    for(int a = 0; a < n; a++)
    {
        getline(cin, str);
        if(str[0] == '+') bonzinho++;
        else malzinho++;
        names[a] = str.substr(2);
    }
    sort(names, names + n);
    for(int a = 0; a < n; a++) cout << names[a] << endl;
    cout << "Se comportaram: " << bonzinho << " | Nao se comportaram: " << malzinho << endl;
}
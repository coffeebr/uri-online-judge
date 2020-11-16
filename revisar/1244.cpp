#include <iostream>
#include <algorithm> //stable_sort
#include <sstream>   //stringstream

using namespace std;

int main()
{
    string str;
    string *frase;
    stringstream conversor;
    int n, size;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        getline(cin, str);
        size = 0;
        conversor.clear();
        conversor<<str;
        frase = new string[50];
        while (conversor >> str)
            frase[size++] = str;
        stable_sort(frase, frase + size, [](string s1, string s2) { return s1.size() > s2.size(); });
        for (int a = 0; a < size - 1; a++)
            cout << frase[a] << " ";
        cout << frase[size - 1] << endl;
    }
}
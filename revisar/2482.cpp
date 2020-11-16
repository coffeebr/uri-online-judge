#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    string s1, s2;
    map<string, string> tradutor;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        getline(cin, s1);
        getline(cin, s2);
        tradutor[s1] = s2;
    }
    cin >> n;
    cin.ignore();
    while (n--)
    {
        getline(cin, s1);
        getline(cin, s2);
        cout << s1 << endl << tradutor[s2] << endl << endl;
    }
}
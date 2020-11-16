#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, b = 0;
    string str, aux;
    cin >> n;
    cin.ignore();
    vector<string> vec;
    vector<string>::iterator it;
    for (a = 0; a < n; a++)
    {
        getline(cin, str);
        vec.clear();
        aux.clear();
        for (b = 0; b <= str.size(); b++)
        {
            if (str[b] != ' ' && b != str.size())
            {
                aux += str[b];
            }
            else
            {
                if (find(vec.begin(), vec.end(), aux) == vec.end())
                    vec.push_back(aux);
                aux.clear();
            }
        }
        sort(vec.begin(), vec.end());
        for (it = vec.begin(); it != vec.end()-1; it++)
            cout << *it << " ";
        cout << vec.back() << endl;
    }
}
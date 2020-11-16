#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int keys(vector<string> dictionary, string word)
{
    int amount = 1;
    bool click;

    for (int a = 0; a < dictionary.size();)
    {
        if (dictionary[a].front() != word.front())
        {
            dictionary.erase(dictionary.begin() + a);
        }
        else
        {
            dictionary[a].erase(dictionary[a].begin());
            a++;
        }
    } // OK
    
    word.erase(word.begin());

    for (const char &ch : word)
    {
        click = false;

        for (int a = 0; a < dictionary.size();)
        {
            if ((dictionary[a].empty()) || (dictionary[a].front() != ch))
            {
                dictionary.erase(dictionary.begin() + a);
                click = true;
            }
            else
            {
                dictionary[a].erase(dictionary[a].begin());
                a++;
            }
        }
        if (click)
        {
            amount++;
        }
        if(dictionary.size() == 1) break;
    }
    return amount;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total;
    vector<string> dictionary;
    string str;
    bool next;

    cout << fixed << setprecision(2);
 
    while (cin >> n)
    {
        total = 0;

        for (int a = 0; a < n; a++)
        {
            cin >> str;
            str += '-';
            dictionary.push_back(str);
        }

        for (int a = 0; a < n; a++)
        {
            total += keys(dictionary, dictionary[a].substr(0, dictionary[a].size() - 1));
        }

        cout  << float(total) / n << endl;
        dictionary.clear();
    }

}

/*
    ------------
    h e l l o
    h e l l 
    h e a v e n
    g o o d b y e
    -------------
    ------------- 1 > dell goodbye, amount++;
    h e l l o
    h e l l 
    h e a v e n
    g o o d b y e
    -------------
    ------------ next;
    e l l o
    e l l 
    e a v e n
    ------------- 
    ------------ delete heaven, amount++;
    l l o
    l l 
    a v e n
    ------------- 
    ------------ next;
    l o
    l 
    ------------- 
    ------------ next;
    o
    
    ------------- 
    
*/
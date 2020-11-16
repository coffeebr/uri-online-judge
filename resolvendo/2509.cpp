#include <iostream>
#include <algorithm>

using namespace std;

bool isBin2(string str)
{
    string s1, s2;
    int k = 0;
    bool membro = true;
    for (const char &ch : str)
    {
        if (ch == '{')
        {
            k++;
        }
        else if (ch == '}' && k == 1)
        {
            k--;
            membro = false;
        }
        else if (k)
        {
            if (membro)
            {
                s1 += ch;
            }
            else
            {
                s2 += ch;
            }
        }
    }

    if ((s1.empty() ^ s1.empty()))
        return false;
    if (s1.substr(0, 8) == "\\pstree{")
    {
        if (s2.substr(0, 8) == "\\pstree{")
        {
            return isBin2(s1) && isBin2(s2);
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool isBin(string str)
{
    string::reverse_iterator it1;
    string::iterator it2;
    int k = 0;
    while (!str.empty())
    {
        cout << "STR: " << str << endl;
        it1 = find(str.rbegin(), str.rend(), '\\');
        if (*(it1 - 1) == 'T')
        {
            k++;
            it2 = find(it1.base(), str.end(), '}');
            cout << "\nokk\n";
            str.erase(it1.base(), it2);
        }
        else if (k != 2)
        {
            cout << endl
                 << *(it1 + 1) << endl;
            return false;
        }
        else
        {
            cout << "\nokk2\n";
            k = 0;
            str.erase(it1.base(), it1.base() + 10);
        }
    }
    return true;
}

int main()
{
    string str;
    while (getline(cin, str))
    {
        if (isBin(str))
            cout << "SIM\n";
        else
            cout << "NAO\n";
    }
}

/*
\pstree{\Tcircle{A}}{\Tcircle{B}\Tcircle{C}}
\pstree{\Tcircle{A}}{\Tcircle{B}}{\Tcircle{C}}
\pstree{\Tcircle{A}}{\pstree{\Tcircle{B}}{\Tcircle{D}\Tcircle{E}}\Tcircle{C}}
\pstree{\Tcircle{A}}{\pstree{\Tcircle{B}}{\Tcircle{D}}{\Tcircle{E}}\Tcircle{C}}
*/
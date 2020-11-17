#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char ch;
    string str;
    string::iterator it;

    while (cin >> ch >> str && (ch != '0' && str != "0"))
    {
        it = str.begin();
        while (it != str.end() && (*it == '0' || *it == ch))
            it++;
        if (it == str.end())
            cout << '0';
        for (; it != str.end(); it++)
        {
            if (*it != ch)
                cout << *it;
        }
        cout << endl;
    }
    return 0;
}
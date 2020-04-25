#include <iostream>
#include <cstring>

using namespace std;

bool eai(string s)
{
    string ss;
    int x = 0, y = 0, b;
    for (int a = 0; a < s.size(); a++)
        if (s[a] == '(' || s[a] == ')')
        {
            ss += s[a];
            (s[a] == '(') ? x++ : x--;
            y++;
        }
    if (x != 0 || y % 2 != 0 || ss[0] == ')' || ss.back() == '(' || y == 0)
        return false;
    for (int a = 0; a <= y / 2; a++)
    {
        while (ss[a] == '.')
            a++;
        if (a > ss.size())
            return false;
        if (ss[a] == '(')
        {
            b = a + 1;
            while ((ss[b] == '(' || ss[b] == '.') && ss[b])
                b++;
            if (a > ss.size() || ss[b] == '(')
                return false;
            ss[a] = ss[b] = '.';
        }
    }
    return true;
}

int main()
{
    string eq, ss;
    bool entao;
    int x = 0, y = 0, b;
    while (getline(cin, eq) && eq != "EOF")
    {
        x = 0, y = 0;
        for (int a = 0; a < eq.size(); a++)
            if (eq[a] == '(' || eq[a] == ')')
            {
                ss += eq[a];
                (eq[a] == '(') ? x++ : x--;
                y++;
            }
        if (x != 0 || y % 2 != 0 || ss[0] == ')' || ss.back() == '(' || y == 0) entao = false;
        for (int a = 0; a <= y / 2; a++)
        {
            while (ss[a] == '.')
                a++;
            if (a > ss.size())
                return false;
            if (ss[a] == '(')
            {
                b = a + 1;
                while ((ss[b] == '(' || ss[b] == '.') && ss[b])
                    b++;
                if (a > ss.size() || ss[b] == '(')
                    return false;
                ss[a] = ss[b] = '.';
            }
        }
        if (eai(eq))
            cout << "CORRECT\n";
        else
            cout << "INCORRECT\n";
    }
}
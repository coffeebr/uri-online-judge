#include <iostream>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, c, line, pages, numch;
    string word;
    while (cin >> n >> l >> c)
    {
        line = pages = 1;
        numch = 0;

        for (int a = 0; a < n; a++)
        {
            cin >> word;
            if (numch + word.size() < c)
                numch += (word.size() + numch == c) ? word.size() : word.size() + 1;
            else
            {
                numch = word.size();
                if (line < l)
                    line++;
                else
                {
                    line = 1;
                    pages++;
                }
            }
        }
        cout << pages << endl;
    }
}
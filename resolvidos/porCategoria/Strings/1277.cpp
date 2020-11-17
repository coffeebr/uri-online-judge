#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string *names, *attendance;
    int t, n, a, b, presence, total;
    queue<string> result;

    cin >> t;

    while (t--)
    {
        cin >> n;

        names = new string[n];
        attendance = new string[n];

        for (a = 0; a < n; a++)
            cin >> names[a];
        for (a = 0; a < n; a++)
            cin >> attendance[a];

        for (a = 0; a < n; a++)
        {
            presence = total = 0;
            for (b = 0; b < attendance[a].size(); b++)
            {
                if (attendance[a][b] == 'P')
                {
                    presence++;
                    total++;
                }
                else if (attendance[a][b] == 'A')
                    total++;
            }
            if (float(presence) / total < 0.75)
                result.push(names[a]);
        }

        if (result.empty())
        {
            cout << endl;
            continue;
        }
        while (result.size() != 1)
        {
            cout << result.front() << " ";
            result.pop();
        }
        cout << result.front() << endl;
        result.pop();
    }
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, c, s, pos, aux;
    bool possibleToPark;
    vector<pair<int, int>> parking;
    while (true)
    {
        possibleToPark = true;
        cin >> n >> k;

        parking.clear();

        if (n == 0 && k == 0)
            return 0;

        cin >> c >> s;
        parking.push_back(make_pair(c, s));
        for (int a = 1; a < n; a++)
        {
            cin >> c >> s;
            while ((parking.end() - 1)->second <= s)
                parking.pop_back();
            if (parking.size() <= k)
                parking.push_back(make_pair(c, s));
            else
            {
                possibleToPark = false;
                for (pos = 0; a < n; a++)
                {
                    if (parking[a].second < c)
                    {
                        parking.erase(parking.begin() + a);
                        parking.push_back(make_pair(c, s));
                        possibleToPark = true;
                        break;
                    }
                }
            }
        }

        if (possibleToPark)
        {
            if (!parking.size())
            {
                cout << "Sim\n";
                continue;
            }

            aux = (parking.end() - 1)->second;
            parking.pop_back();
            while (!parking.size())
            {
                if ((parking.end() - 1)->second >= aux)
                    parking.pop_back();
                else
                {
                    possibleToPark = false;
                    break;
                }
            }
            if (possibleToPark)
            {
                cout << "Sim\n";
                continue;
            }
        }
        cout << "Nao\n";
    }
    cout << endl;
    return 0;
}
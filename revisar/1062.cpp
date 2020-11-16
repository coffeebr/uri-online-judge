#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool itIsPossible(vector<int> train, int n)
{
    vector<int> train2;
    for (int a = n; a > 0; a--)
    {
        if (find(train.begin(), train.end(), a) != train.end())
        {
            while (train.back() != a)
            {
                train2.push_back(train.back());
                train.pop_back();
            }
            train.pop_back();
        }
        else if (train2.size() != 0)
        {
            if (train2.back() == a)
                train2.pop_back();
            else
                return false;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    int n, wagon;
    vector<int> train;
    while (true)
    {
        cin >> n;
        if (n == 0)
            return 0;
        while (true)
        {
            train.clear();
            cin >> wagon;
            if (wagon == 0)
                break;

            train.push_back(wagon);
            for (int a = 1; a < n; a++)
            {
                cin >> wagon;
                train.push_back(wagon);
            }
            if (itIsPossible(train, n))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        cout << endl;
    }
}
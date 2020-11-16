#include <iostream>
#include <queue>

using namespace std;

typedef pair<int, priority_queue<int, vector<int>, std::greater<int>>> Antenna;

void initAntennas(Antenna &a1, Antenna &a2)
{
    a1.first = a2.first = 0;
    while (!a1.second.empty())
        a1.second.pop();
    while (!a2.second.empty())
        a2.second.pop();
}

int main()
{
    int n, k;

    Antenna left, right; //first=total, secound = queue
    priority_queue<int> descendingOrder;
    vector<int> lixo;
    while (cin >> n && n)
    {
        initAntennas(left, right);
        lixo.clear();

        if (n == 1)
        {
            cout << "0\n";
            continue;
        }
        
        /***************************************************************/
        while (n--)
        {
            cin >> k;
            descendingOrder.push(k);
        }
        /***************************************************************/

        while (!descendingOrder.empty())
        {
            if (right.first >= left.first)
            {
                left.first += descendingOrder.top();
                left.second.push(descendingOrder.top());
            }
            else
            {
                right.first += descendingOrder.top();
                right.second.push(descendingOrder.top());
            }
            descendingOrder.pop();
        }
        /*
        while (right.first != left.first)
        {
            if (right.first > left.first)
            {
                if (right.first > left.first + right.second.top())
                {
                    left.first += right.second.top();
                    left.second.push(right.second.top());
                    right.first -= right.second.top();
                    right.second.pop();
                }
                else
                {
                    right.first -= right.second.top();
                    lixo.push_back(right.second.top());
                    right.second.pop();
                }
            }
            else
            {
                if (right.first > left.first + right.second.top())
                {
                    right.first += left.second.top();
                    right.second.push(left.second.top());
                    left.first -= left.second.top();
                    left.second.pop();
                }
                else
                {
                    left.first -= left.second.top();
                    lixo.push_back(left.second.top());

                    left.second.pop();
                }
            }
        }*/
        int diferenca = right.first - left.first;

        cout << right.first << endl;
    }
}

/*

2 2 3

8 8 8 7 7 7 6 6 5 4 4 3 2 2
 
-> 8 8 7 6 4 3 2
-> 8 7 7 6 5 4 2
*/
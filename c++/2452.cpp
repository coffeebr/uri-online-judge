#include <iostream>

using namespace std;

int main()
{
    int t, g, distance = 0;
    cin >> t >> g;
    int drops[g];
    for (int a = 0; a < g; a++)
    {
        cin >> drops[a];
        if (a == 0)
            distance = (drops[a] - 1)*2;
        else if (distance < drops[a] - drops[a - 1]) distance = drops[a] - drops[a-1];
    }
    if(distance < (t - drops[g-1])*2 ) distance = (t-drops[g-1])*2;
    if(distance % 2 != 0) distance--;
    distance/=2;
    cout << distance << endl;

    return 0;
}

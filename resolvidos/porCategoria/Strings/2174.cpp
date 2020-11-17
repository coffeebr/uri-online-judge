#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    set<string> pomekons;
    string pomekon;
    int n;
    
    cin >> n;

    while(n--)
    {
        cin >> pomekon;
        pomekons.insert(pomekon);
    }
    cout << "Falta(m) " << 151-pomekons.size() <<" pomekon(s).\n";
}
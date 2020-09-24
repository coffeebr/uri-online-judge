#include <iostream>
#include <vector>

#define mod 1000007

typedef long long ll;

using namespace std;

int main()
{
    vector<ll> vec;
    ll t, k, n, aux, a;
    cin >> t;

    for (; t > 0; t--)
    {
        cin >> k >> n;
        if (n <= k)
            cout << n - 1 << endl;
        else
        {
            vec.clear();
            aux = 0;
            for (a = 0; a < k; a++)
            {
                vec.push_back(a);
                aux = (a + aux) %mod;
            }
            vec.push_back(aux);
            for (a++; a < n; a++)
            {
                vec.push_back(
                    (2*vec.back() > vec.front()) ? (2*vec.back()-vec.front())%mod : (mod - ((vec.front() - 2*vec.back()) % mod))
                );
                vec.erase(vec.begin());
            }
            cout << vec.back() << endl;
        }
    }
}
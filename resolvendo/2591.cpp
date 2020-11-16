#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n, k1, k2;
    bool bl;
    string golpe;

    cin >> n;

    while(n--)
    {
        k1 = k2 = 0;
        bl = true;
        cin >> golpe;
        for(const char &ch:golpe)
        {
            if(ch == 'a' )
            {
                if(bl) k1++;
                else k2++;
            }
            else if(ch == 'k') bl = false;

        }
        cout << 'k';
        for(int a = 0; a < k1*k2; a++) cout << 'a';
        cout << endl;
    }
}



/*
4
hamekame
haamekaame
haaamekaame
haaaamekaaame
	

ka
kaaaa
kaaaaaa
kaaaaaaaaaaaa
*/
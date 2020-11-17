#include <iostream>

using namespace std;

int main()
{
    unsigned short int n, x = 0;
    string face, str;

    cin >> n;
    cin >> ws;
    while (n--)
    {
        if (face.empty())
            face = "F A C E";
        getline(cin, str);
        if (str == string(face.rbegin(), face.rbegin() + 7))
        {
            x++;
            face.erase(face.end()-7 , face.end());
        }
        else
        {
            face += str;
        }
    }
    cout << x << endl;
}

#include <iostream>

using namespace std;

bool cmp(string s1, string s2)
{
    for(unsigned short int a = 0; a < 7; a++)
        if(s1[6 - a] != s2[a]) return false;
    return true;
}
int main()
{
    string str, face;
    unsigned short int n, x = 0;
    cin >> n;
    cin.ignore();
    
    while(n--)
    {
        if(!face.size())
            face += "F A C E";
        getline(cin, str);
        if(cmp(face.substr(face.size() -7, face.size()), str))
        {
            x++;
            face.erase(face.end() -7 , face.end());
        }
        else
            face += str;
    }
    cout << x << endl;
}
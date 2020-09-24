#include <iostream>

using namespace std;

int main(){
    int n, a, b, k;
    string str1, str2;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        str2.clear();
        getline(cin, str1);
        /*********************************/
        for(a = 0; a < str1.size(); a++)
        {
            if(str1[a] == '0')
            {
                b = a;
                while(str1[b] =='0')
                {
                    b++;
                }
                k = b-a;
                if(k > 2)
                {
                    str2 += '#';
                    while(k >= 0)
                    {
                        str2 += {(char)(k), 0 };
                        k -= 255;
                    }
                }
                else
                {
                    str2 += '0';
                    if(k == 2) str2 += '0';
                }
                a = b-1;
            }
            else if(str1[a] == ' ')
            {
                b = a;
                while(str1[b] == ' ')
                {
                    b++;
                }   
                k = b-a;
                if(k > 2)
                {
                    str2 += '$';
                    while(k >= 0)
                    {
                        str2 += {(char)(k), 0 };
                        k -= 255;
                    }
                }
                else
                {
                    str2 += ' ';
                    if(k == 2) str2 += ' ';
                }
                a = b-1;
            }
            else
            {
                str2 += str1[a]; 
            }
        }
        /*********************************/
        cout << str2 << endl;
    }
}
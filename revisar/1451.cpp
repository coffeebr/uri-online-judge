#include <iostream>

using namespace std;

int main()
{
    string str, newStr;
    bool bl;
    int aux;
    while(getline(cin, str) && str != "EOF")
    {
        newStr.clear();
        bl = false;
        for(int a = 0; a < str.size(); a++)
        {
            if(str[a] =='[')
            {
                bl = true;
                aux = -1;
            }//Insere apartir do inicio
            else if(str[a] == ']')
            {
                bl = false;
            }//Insere normalmente
            else 
            {
                if(bl ) aux++;
                if(!bl)
                {
                    newStr += str[a];
                }
                else newStr.insert(newStr.begin() + aux, str[a]);
            }
        }
        if(!newStr.empty())
        cout << newStr << endl;
    }
}
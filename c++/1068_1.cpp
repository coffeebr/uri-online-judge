#include <iostream>

using namespace std;

int main()
{
  string s;
   bool bl;
  int n;
  while(getline(cin, s) && s != "EOF")
  {
    n = 0;
    bl = false;
    for(int a = 0; a < s.size(); a++)
    {
      if(s[a] == '(')n++;
      if(s[a] == ')')n--;
      if(n < 0)
      {
        bl = true;
        break;
      }
    }
    if(n != 0)bl = true; 
    if(bl)
        cout << "incorrect\n";
    else
      cout << "correct\n";
  }
}

#include <iostream>

using namespace std;

unsigned long convertToInt(const string &str)
{
  unsigned long cont = 0b1, value = 0b0;

  for (const char &ch : str)
  {
    value += (ch == 'O' ? cont : 0);
    cont = cont << 1;
  }
  return value;
}

string convertToLed(const unsigned long &total, const unsigned long &max)
{
  unsigned long aux = 0b1;
  string str;
  for (unsigned long a = 0; a < max; a++)
  {
    str += bool(total & aux) ? 'O' : 'X';;
    aux = aux << 1;
  }
  return str;
}

int main()
{
  //ios::sync_with_stdio(false);

  unsigned long n, k, value;
  string str;
  cin >> n;
  while (n--)
  {
    cin >> str >> k;

    value = convertToInt(str);
    cout << convertToLed( (k + value)  , str.size()) << endl;
  }
}
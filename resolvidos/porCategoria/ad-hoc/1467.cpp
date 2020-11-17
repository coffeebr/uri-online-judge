#include <iostream>

using namespace std;

int main()
{
	short int a, b, c;
	
	while(cin >> a >> b >> c) cout << ( a == b ? ( a == c ? '*' : 'C' ) : ( a == c ? 'B' : 'A') ) << endl;
		
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	stringstream ss;
	int sum;
	while( cin >> str )
	{
		if( str[0] == '-' )
		{
			break;
		}
		ss.str(str);
		int a, b;
		if( str[1] == 'x' )
		{
			ss >> hex >> sum;
			printf( "%d\n", sum);
		}
		else
		{
			ss >> dec >> sum;
			printf( "0x%X\n", sum);
		}
		ss.clear();
	}
  	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main() 
{ 
	char thousand[10][5] = { "", "M", "MM", "MMM","MMMM" }; 
	char hundred[10][5] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" }; 
	char ten[10][5] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" }; 
	char one[10][5] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };  
	int a,nu=1;
	while( scanf( "%d", &a ) != EOF )
	{
		printf( "%s%s%s%s\n", thousand[ a/1000 ], hundred[ (a/100)%10 ], ten[ (a/10)%10 ], one[ a%10 ] );
	}
	return 0; 
}

#include<bits/stdc++.h>
using namespace std;
int r[128] = {0};
char thousand[10][10] = { "", "M", "MM", "MMM","MMMM" };
char hundred[10][10] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
char ten[10][10] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
char one[10][10] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" }; 
int main() 
{  
	int a;
	ofstream fout;
	fout.open("OutputFile.txt");
	r['I'] = 1, r['V'] = 2, r['X'] = 2, r['L'] = 2, r['C'] = 2, r['D'] = 3, r['M'] = 4;
	while( scanf( "%d", &a ) != EOF )
	{
		int sum = 0;
		for(int i = 0; i < 5; i++)
		{
			sum += r[thousand[a/1000][i]];
			sum += r[hundred[(a/100)%10][i]];
			sum += r[ten[(a/10)%10][i]];
			sum += r[one[a%10][i]];
		}
		cout << sum << endl;
	}
	return 0; 
}

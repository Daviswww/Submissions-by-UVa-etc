#include<bits/stdc++.h>
#define dg(X, Y) ((X) >= (Y) ? (X - Y) * 9 : (40 + X - Y) * 9)
using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	int a, b, c, d;
	while(cin >> a >> b >> c >> d)
	{
		if(a==0 && b==0 && c==0 && d==0) break;
		int degree=1080; 
		
		degree += dg(a, b);
		degree += dg(c, b);
		degree += dg(c, d);
		
		cout << degree << endl;
	}
	return 0;
} 

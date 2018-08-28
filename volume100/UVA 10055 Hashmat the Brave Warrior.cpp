#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	long long x, y;
	while(cin >> x >> y)
	{
		cout << abs(y - x )<< endl;
	}
	return 0;
} 

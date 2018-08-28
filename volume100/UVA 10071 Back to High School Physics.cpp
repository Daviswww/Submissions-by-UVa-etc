#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");	
	long long m, n;
	
	while(cin >> m >> n)
	{
		cout << m * 2 * n << endl;
	}
	return 0;
} 

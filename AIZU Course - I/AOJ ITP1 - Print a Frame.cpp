#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	while(cin >> n >> m)
	{
		if(n == 0 && m == 0)
		{
			break;
		}
		for(int i = 0; i < m; i++)
		{
			cout << "#";
		}
		puts("");
		for(int i = 0; i < n-2; i++)
		{
			cout << "#";
			for(int j = 0; j < m - 2; j++)
			{
				cout << ".";
			}
			cout << "#";
			puts("");
		}
		for(int i = 0; i < m; i++)
		{
			cout << "#";
		}
		cout << endl << endl;
	}
	return 0;
}

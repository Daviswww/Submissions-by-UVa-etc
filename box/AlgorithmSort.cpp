#include<bits/stdc++.h>

using namespace std;

bool MaxCmp( int a, int b ) {return a > b;}
bool MinCmp( int a, int b ) {return a < b;}
int main()
{
	int n;
	while(cin >> n && n)
	{
		int ary[1000];
		for(int i = 0; i < n; i++)
		{
			cin >> ary[i];
		}
		sort( ary, ary + n, MaxCmp);
		cout << "MaxCmp: ";
		for(int i = 0; i < n; i++)
		{
			cout << ary[i] <<" ";
		}
		puts("");
		sort( ary, ary + n, MinCmp);
		cout << "MinCmp: ";
		for(int i = 0; i < n; i++)
		{
			cout << ary[i] <<" ";
		}
	}
	return 0;
}

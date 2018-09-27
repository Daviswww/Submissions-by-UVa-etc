#include<bits/stdc++.h>
bool MinCmp( int a, int b ) {return a < b;}
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int ary[4];
		for(int i = 0; i < 4; i++)
		{
			cin >> ary[i];
		}
		sort( ary, ary + 4, MinCmp);
		if(ary[0] == ary[1] && ary[1] == ary[2] && ary[2] == ary[3])
		{
			cout << "square" << endl;
		}
		else if(ary[0] == ary[1] && ary[2] == ary[3])
		{
			cout << "rectangle" << endl;
		}
		else if(ary[0] + ary[1] + ary[2] < ary[3])
		{
			cout << "banana" << endl;
		}
		else
		{
			cout << "quadrangle" << endl;
		}
	}
	return 0;
}

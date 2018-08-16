#include<bits/stdc++.h>

using namespace std;

bool cmp( int a, int b ) {return a > b;}

int main()
{
	int n;
	
	cin >> n;
	for(int g = 0; g < n; g++)
	{
		int k, ary[20005], sum = 0;
		
		cin >> k;
		for(int i = 0; i <= k; i++)
		{
			ary[i] = 0;
		}
		for(int i = 0; i < k; i++)
		{
			cin >> ary[i];
		}
		sort( ary, ary + k, cmp);
		
		for(int i = 2; i < k; i += 3)
		{
			sum += ary[i];
		}
		cout << sum << endl;
	}
	return 0;
}

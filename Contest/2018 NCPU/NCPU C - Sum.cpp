#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, ary[500005];
	string str;
	
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> ary[i]; 
	}
	while(cin >> str)
	{
		int sum = 1;, ai, x;
		if(str == "sum")
		{
			int ans = 0;
			
			cin >> sum;
			for(int i = 1; i <= sum; i++)
			{
				ans += ary[i];
			}
			cout << ans << endl;
		}
		else
		{
			cin >> ai >> x;
			ary[ai] = x;
		}
	}
	return 0;
}

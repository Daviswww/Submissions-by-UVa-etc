#include<bits/stdc++.h>

using namespace std;
const int N = 100005;
int main()
{
	int t, n;
	cin >> t;
	while(t--)
	{
		int tmp, ok = 0, a1[N] = {0}, a2[N] = {0};
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			cin >> a1[i];
		}
		for(int i = 1; i <= n; i++)
		{
			cin >> tmp;
			a2[i] = tmp-a1[i];
		}

		for(int i = 0; i <= n+1; i++)
		{
			if(a2[i] < 0)
			{
				ok+=10;
			}
			else if(a2[i] != a2[i+1])
			{
				ok++;
			}
		}
		if(ok <= 2)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
} 

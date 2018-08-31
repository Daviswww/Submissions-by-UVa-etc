#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	while(cin >> n >> m)
	{
		bool ok = true, go = true;
		if(n == 0 && m == 0)
		{
			break;
		}
		for(int i = 0; i < n; i++)
		{
			if(ok)
			{
				go = true;
				for(int j = 0; j < m; j++)
				{
					if(go)
					{
						cout << "#";
						go = false;
					}
					else
					{
						cout << ".";
						go = true;
					}
				}
				ok = false;			
			}
			else
			{
				go = true;
				for(int j = 0; j < m; j++)
				{
					if(go)
					{
						cout << ".";
						go = false;
					}
					else
					{
						cout << "#";
						go = true;
					}
				}
				ok = true;				
			}
			puts("");
		}
		puts("");
	}
	return 0;
}

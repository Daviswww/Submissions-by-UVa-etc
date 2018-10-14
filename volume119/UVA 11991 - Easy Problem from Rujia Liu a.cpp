#include<bits/stdc++.h>

using namespace std;
vector<int> v[1000050];

int main()
{
	int n, m;
	while(cin >> n >> m)
	{
		for(int i = 1; i <= n; i++)
		{
		  int tmp;
		  cin >> tmp;
		  v[tmp].push_back(i);			
		}
		for(int i = 1; i <= m; i++)
		{
			int q, w;
			cin >> q >> w;
			if(v[w].size() < q) 
			{
				printf("0\n");
			}
   			else
			{
				printf("%d\n", v[w][q-1]);
			}
		}
	}
	return 0;
}

#include <iostream>
#include<vector>
using namespace std;
const int MAXX=1000050;
vector<int> v[MAXX];

int main()
{
	int n, m;
	while(cin >> n >> m)
	{
		for(int i = 1; i <= n; i++)
		{
		  int x;
		  cin >> x;
		  v[x].push_back(i);			
		}
		for(int i = 1; i <= m; i++)
		{
			int k, x, ans = 0;
			cin >> k >> x;
			if(v[x].size() < k) ans = 0;
   			    else ans = v[x][k-1];
		    cout << ans << endl; 
		}
	}
	return 0;
}

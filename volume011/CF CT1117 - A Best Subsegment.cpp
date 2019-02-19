#include<bits/stdc++.h>

using namespace std;
const int maxn = 200005;
int main()
{
	int n, a[maxn] = {0}, k = 0, g = 0, lg = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		k = max(k, a[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] == k)
		{
			g++;
		}
		else
		{
			lg = max(g, lg);
			g = 0;
		}
	}
	cout << max(lg, g) << endl;
	return 0;
} 

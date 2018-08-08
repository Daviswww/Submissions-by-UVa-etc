#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, g, k;
		cin >> n >> >> k;
		int a[n],b[n];
		for(int i = 0; i < n;i++)
			cin >> a[i];
		for(int i = 0; i < g;i++)
			cin >> b[i];
		sort(a,a+n);
		sort(b,b+n,comp);
		int i = 0;
		int j = 0;
		int sum = 0;
		while(i < n && j < n)
		{
			if(a[i] + b[j] >= k)
			{
				sum++;
				i++;
				j++;	
			}
			else
			{
				i++;
			}
		}
		cout << sum << endl;
		 
	}
	return 0;
}


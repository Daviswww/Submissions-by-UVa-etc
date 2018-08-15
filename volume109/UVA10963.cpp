#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		bool go = true;
		int k, x, y, sum = 0, temp = 0;
		if(i)
		{
			cout << endl;
		}
		cin >> k;
		cin >> x >> y;
		sum = x - y;
		for(int j = 1; j < k; j++)
		{
			cin >> x >> y;
			if(x - y != sum)
			{
				go = false;
			}
		}
		if(go)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}


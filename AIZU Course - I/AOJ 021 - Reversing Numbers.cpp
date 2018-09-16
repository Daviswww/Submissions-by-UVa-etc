#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int ary[105] = {0};
		
		for(int i = 0 ;i < n; i++)
		{
			cin >> ary[i];
		}
		for(int i = n - 1;i >= 0; i--)
		{
			cout << ary[i];
			if(i != 0)
			{
				cout << " ";
			}
		}
		puts("");
	}
	return 0;
}

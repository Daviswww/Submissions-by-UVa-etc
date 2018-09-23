#include<bits/stdc++.h>

using namespace std;
const int 
	l[6] = {1, 4, 2, 5, 3, 6},
	r[6] = {1, 3, 5, 2, 4, 6},
	n[6] = {2, 6, 3, 4, 1, 5},
	w[6] = {3, 2, 6, 1, 5, 4},
	e[6] = {4, 2, 1, 6, 5, 3},
	s[6] = {5, 1, 3, 4, 6, 2};
int main()
{
	string str;
	bool go = false;
	int k;
	while(cin >> k && k)
	{
		int sum = 1, ary[6] = {1, 2, 3, 4, 5, 6}, ax[6];
		for(int i = 0; i < k; i++)
		{
			cin >> str;
			//select
			if(str[0] == 'N')
			{
				for(int i = 0; i < 6; i++)
				{
					ax[i] = ary[n[i]-1];
				}
			}
			else if(str[0] == 'W')
			{
				for(int i = 0; i < 6; i++)
				{
					ax[i] = ary[w[i]-1];
				}
			}
			else if(str[0] == 'E')
			{
				for(int i = 0; i < 6; i++)
				{
					ax[i] = ary[e[i]-1];
				}
			}
			else if(str[0] == 'S')
			{
				for(int i = 0; i < 6; i++)
				{
					ax[i] = ary[s[i]-1];
				}
			}
			else if(str[0] == 'R')
			{
				for(int i = 0; i < 6; i++)
				{
					ax[i] = ary[r[i]-1];
				}
			}
			else if(str[0] == 'L')
			{
				for(int i = 0; i < 6; i++)
				{
					ax[i] = ary[l[i]-1];
				}
			}
			for(int i = 0; i < 6; i++)
			{
				ary[i] = ax[i];
			}
			sum += ary[0];
		}
		cout << sum << endl;
	}
	return 0;	
} 

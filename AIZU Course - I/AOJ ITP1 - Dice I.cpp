#include<bits/stdc++.h>

using namespace std;
const int 
	a[6] = {1, 2, 3, 4, 5, 6}, 
	w[6] = {3, 2, 6, 1, 5, 4},
	e[6] = {4, 2, 1, 6, 5, 3},
	n[6] = {2, 6, 3, 4, 1, 5},
	s[6] = {5, 1, 3, 4, 6, 2};

int main()
{
	string str;
	int ary[6] = {0}, ax[6];
	for(int i = 0; i < 6; i++)
	{
		cin >> ary[i];
	}
	cin >> str;
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == 'W')
		{
			for(int i = 0; i < 6; i++)
			{
				ax[i] = ary[w[i]-1];
			}
		}
		if(str[i] == 'E')
		{
			for(int i = 0; i < 6; i++)
			{
				ax[i] = ary[e[i]-1];
			}
		}
		if(str[i] == 'N')
		{
			for(int i = 0; i < 6; i++)
			{
				ax[i] = ary[n[i]-1];
			}
		}
		if(str[i] == 'S')
		{
			for(int i = 0; i < 6; i++)
			{
				ax[i] = ary[s[i]-1];
			}
		}
		for(int i = 0; i < 6; i++)
		{
			ary[i] = ax[i];
		}
	}
	cout << ary[0] << endl;
	return 0;	
} 

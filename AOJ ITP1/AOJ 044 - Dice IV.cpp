#include<bits/stdc++.h>

using namespace std;

const int 
	t[6] = {1, 4, 2, 5, 3, 6},
	n[6] = {2, 6, 3, 4, 1, 5},
	w[6] = {3, 2, 6, 1, 5, 4},
	e[6] = {4, 2, 1, 6, 5, 3},
	s[6] = {5, 1, 3, 4, 6, 2},
	a[6] = {1, 2, 3, 4, 5, 6};
int main()
{
	string str;
	bool go = false;
	int ary[6] = {0}, art[6] = {0}, ax[6], k = 1, m;
	cin >> m;
	for(int i = 0; i < 6; i++)
	{
		cin >> art[i];
		if(art[i] == art[i-1])
		{
			k++;
		}
	}	
	if(k == 5)
	{
		go = true;
	}	
	for(int cas = 1; cas < m; cas++)
	{
		for(int i = 0; i < 6; i++)
		{
			cin >> ary[i];
			if(art[0] == ary[i])
			{
				k = i;
			}
		}
		//select
		if(k == 0)
		{
			str = "T";
		}
		else if(k == 1)
		{
			str = "N";
		}
		else if(k == 2)
		{
			str = "W";
		}
		else if(k == 3)
		{
			str = "E";
		}
		else if(k == 4)
		{
			str = "S";
		}
		else if(k == 5)
		{
			str = "NN";
		}
		//MOVE
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] == 'T')
			{
				for(int i = 0; i < 6; i++)
				{
					ax[i] = ary[i];
				}
			}
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
		//TURN
		for(int i = 0; i < 6; i++)
		{
			ary[i] = ax[i];
		}
		for(int i = 0; i < 4; i++)
		{
			int k = 0;
			for(int i = 0; i < 6; i++)
			{
				ax[i] = ary[t[i]-1];
			}
			for(int i = 0; i < 6; i++)
			{
				ary[i] = ax[i];
				if(art[i] == ary[i])
				{
					k++;
				}
			}
			if(k == 6)
			{
				go = true;
				break;
			}
		}
	}
	if(go)
	{
		cout << "No" << endl;	
	}
	else
	{
		cout << "Yes" << endl;
	}	
	return 0;	
} 

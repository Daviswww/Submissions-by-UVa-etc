#include<bits/stdc++.h>

using namespace std;
const int 
	a[6][6] = 
	{
		{0, 3, 5, 2, 4, 0},
		{4, 0, 1, 6, 0, 3},
		{2, 6, 0, 0, 1, 5},
		{5, 1, 0, 0, 6, 2},
		{3, 0, 6, 1, 0, 4},
		{0, 4, 2, 5, 3, 0}
	};

int main()
{
	int ary[6] = {0}, n;
	
	for(int i = 0; i < 6; i++)
	{
		cin >> ary[i];
	}
	cin >> n;
	for(int i = 0;i < n; i++)
	{
		int p, q, p1, q1;
		cin >> p1 >> q1;
		for(int j = 0; j < 6; j++)
		{
			if(ary[j] == p1)
			{
				p = j;
			}
			if(ary[j] == q1)
			{
				q = j;
			}
		}
		cout << ary[a[p][q]-1] << endl;
	}
	return 0;
}


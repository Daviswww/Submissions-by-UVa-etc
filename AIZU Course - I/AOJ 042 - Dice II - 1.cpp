#include<bits/stdc++.h>

using namespace std;

const int t[10][10] = {
			{3, 2, 6, 1, 5, 4},	//W
			{4, 2, 1, 6, 5, 3},	//E
			{2, 6, 3, 4, 1, 5},	//N
			{5, 1, 3, 4, 6, 2},	//S
			{1, 4, 2, 5, 3, 6},	//T
		};

int main() 
{
	int d[10], a[10], k[200], n, x, y;
	string s = "SEEEESEEEESEEEESEEEEESEEEENNEEEE";
	k['W'] = 0, k['E'] = 1, k['N'] = 2, k['S'] = 3, k['T'] = 4;
	
	for(int i = 0; i < 6; i++)
	{
		cin >> d[i];
	}
	cin >> n;
	for(int sk = 0; sk < n; sk++)
	{
		cin >> x >> y;
		for(int i = 0; i < s.size(); i++)
		{
			for(int j = 0; j < 6; j++)
			{
				a[j] = d[t[k[s[i]]][j]-1];
			}
			for(int j = 0; j < 6; j++)
			{
				d[j] = a[j];
			}
			if(d[0] == x && d[1] == y)
			{
				break;
			}
		}
		cout << d[2] << endl;;		
	}

	return 0;
}

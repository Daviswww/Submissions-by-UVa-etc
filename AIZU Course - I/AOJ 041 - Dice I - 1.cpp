#include<bits/stdc++.h>

using namespace std;

const int t[10][10] = {
			{3, 2, 6, 1, 5, 4},	//W
			{4, 2, 1, 6, 5, 3},	//E
			{2, 6, 3, 4, 1, 5},	//N
			{5, 1, 3, 4, 6, 2}	//S
		};

int main() 
{
	int d[10], a[10], k[200];
	string s;
	k['W'] = 0, k['E'] = 1, k['N'] = 2, k['S'] = 3;
	
	for(int i = 0; i < 6; i++)
	{
		cin >> d[i];
	}
	cin >> s;
	
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
	}
	cout << d[0] << endl;;
	return 0;
}

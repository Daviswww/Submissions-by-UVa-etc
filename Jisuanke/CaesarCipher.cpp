/*
input:
1
7 7
ACMICPC
CEOKERE
PKPIZKC
output:
Case #1: NINGXIA
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for(int k = 1; k <= t; k++)
	{
		int n, m, w = 0;
		string str[55];
		cin >> n >> m;
		for(int i = 0; i < 3; i++)
		{
				cin >> str[i];
		}
		
		w = str[0][0] - str[1][0];
		cout << w << endl;
		cout << "Case #"<< k <<": ";
		for(int i = 0; i < m; i++)
		{
			int u = 0, g = 'Z', f = 'A';
			string s;
			u = w + str[2][i];
			if(u > g)
			{
				u -= 26;	
			}
			else if(u < f)
			{
				u += 26;	
			}
			s = u;
			cout << s;
		}
		cout << endl;
	}
	return 0;
} 

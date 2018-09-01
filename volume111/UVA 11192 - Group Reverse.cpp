#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string str;
	
	while(cin >> n && n)
	{
		cin >> str;
		
		int x = str.size()/n, y = 0, k = str.size()/n;
		
		while(y != str.size())
		{
			for(int i = x-1; i >= y; i--)
			{
				cout << str[i];
			}
			x += k, y += k;
		}
		cout << endl;
	}
	return 0;
} 

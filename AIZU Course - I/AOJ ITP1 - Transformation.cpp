#include<bits/stdc++.h>
#define swap(x, y) {int tmp; tmp = x, x = y, y = tmp;}
using namespace std;

int main()
{
	string str;
	
	while(cin >> str)
	{
		string stt, stk;
		int n;
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			int x, y;
			cin >> stt;
			
			if(stt == "replace")
			{
				cin >> x >> y >> stk;
				for(int i = x, j = 0; i <= y; i++, j++)
				{
					swap(str[i], stk[j]);
				}	
			}
			else if(stt == "reverse")
			{
				cin >> x >> y;
				while(true)
				{
					swap(str[x], str[y]);
					if(y - x == 1 || x == y)
					{
						break;
					}
					x++, y--;
				}	
			}
			else
			{
				cin >> x >> y;
				for(int i = x;i <= y; i++)
				{
					cout << str[i];
				}
				puts("");
			}
		}
	}
	return 0;
} 

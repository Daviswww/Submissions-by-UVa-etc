/*
https://nanti.jisuanke.com/t/19
output
5
8 9 9 9 9
input
9 0 0 0 0
*/

#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int ary[n+1];
		for(int i = 1; i <= n; i++)
		{
			cin >> ary[i];
		}
		ary[n] += 1;
		for(int i = n; i > 0; i--)
		{
			if(ary[i] > 9)
			{
				ary[i] = 0;
				ary[i-1] += 1;
			}
		}
		if(ary[0] == 1)
		{
			for(int i = 0; i <= n; i++)
			{
				cout << ary[i] <<" ";
			}			
		}
		else
		{
			for(int i = 1; i <= n; i++)
			{
				cout << ary[i] <<" ";
			}	
		}
		cout << endl;
	}
	return 0;	
} 

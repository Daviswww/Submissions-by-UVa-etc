/*
https://nanti.jisuanke.com/t/87
input
7
4 5 6 7 0 1 2 
7
output
3
*/

#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int ary[n], max = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> ary[i];
		}
		cin >> max;
		for(int i = 0; i < n; i++)
		{
			if(max == ary[i])
			{
				cout << i<< endl;
				break;
			}
			if(i == n-1)
			{
				cout << "-1" <<endl;
				break;
			}
		}
	}
	return 0;	
} 

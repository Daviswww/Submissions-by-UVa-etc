/*
https://nanti.jisuanke.com/t/18
input
5
2 0 2 0 1
output
true
*/
#include<iostream>

using namespace std;

int main()
{
	int n;
	
	while(cin >> n)
	{
		int ary[505], k = 0;
		for(int i = 0; i < n ;i ++)
		{
			cin >> ary[i];
		}
		while(true)
		{
			if(k >= n-1)
			{
				cout <<"true" << endl;
				break;
			}
			if(ary[k] == 0)
			{
				cout <<"false" << endl;
				break;
			}
			else
			{
				k += ary[k];
			}
		}
	}
	return 0;	
} 

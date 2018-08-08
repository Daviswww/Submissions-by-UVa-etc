/*
https://nanti.jisuanke.com/t/93
input
7
1 2 2 2 0 1 1
0
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
		int ary[n], tag;
		for(int i = 0 ;i < n; i++)
		{
			cin >> ary[i];
		}
		cin >> tag;
		for(int i = 0; i < n; i++)
		{
			if(tag == ary[i])
			{
				cout << "true" << endl;
				break;
			}
			else if(i == n-1)
			{
				cout << "false" << endl;
			}
		}
	}
	return 0;	
} 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string mot[10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int n, m, day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while(cin >> n >> m)
	{
		if(n == 0 || m == 0) break;
		int sum = 2;
		for(int i = 1; i < n; i++)
		{
			sum += day[i-1];
		}
		cout << mot[((sum + m)%7)] << endl;
	}
	return 0;	
} 

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, ary[105] = {0}, max = 0;
	while(cin >> n)
	{
		ary[n]++;
		if(ary[n] > max)
		{
			max = ary[n];
		}
	}
	for(int i = 1; i < 105; i++)
	{
		if(max == ary[i])
		{
			cout << i << endl;
		}
	}
	return 0;
}

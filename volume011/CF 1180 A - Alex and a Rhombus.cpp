#include<bits/stdc++.h>

using namespace std;
const int N = 105;

int main()
{
	int n, ary[N] = {0};
	
	for(int i = 1; i <= N; i++)
	{
		ary[i] = i * i + (i-1) * (i-1);
	}
	
	cin >> n;
	cout << ary[n];
	

	return 0;
} 

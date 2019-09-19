#include<bits/stdc++.h>

using namespace std;

const int N = 400000;
int main()
{
	long long n, ary[N], sum = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> ary[i];
	}
	
	sort(ary, ary+n);
	
	for(int i = 0; i < n/2; i++)
	{
		sum += (ary[i]+ary[n-1-i])*(ary[i]+ary[n-1-i]);
	}
	cout << sum << endl;
	return 0;
} 

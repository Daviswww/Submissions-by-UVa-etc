#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;
	long long k, x;
	
	cin >> n;
	
	for(int i =0;i < n; i++)
	{
		
		cin >> k >> x;
		cout << k * 9 + x - 9<< endl;
	}
	
	return 0;	
} 

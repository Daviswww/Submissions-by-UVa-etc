#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int m;
	cin >> m;
	
	int a[m];
	for(int i=0;i<m;i++) 
	{
		cin >> a[i];
	}
	
	int n;
	cin >> n;
	
	int b[n];
	for(int i = 0; i < n; i++) 
	{
		cin >> b[i];
	}
	
	int sum = n + m, ai = 0, bi =0 , k=0;
	int c[sum];
	
	while((ai < m) && (bi < n))
	{
		if(a[ai] < b[bi]) 
		{
			c[k++] = a[ai++];
		}
		else 
		{
			c[k++] = b[bi++];
		}
	}
	if(sum % 2 == 0)
	{
		printf("%0.5lf", (double(c[(sum-1)/2])+c[(sum+1)/2])/2);
	}
	else
	{
		printf("%0.5lf", double(c[(sum-1)/2]));
	}
	return 0;
}

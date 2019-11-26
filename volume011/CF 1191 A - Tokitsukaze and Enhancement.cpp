#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	
	cin >> n;
	if(n%4==0)
	{
		printf("1 A");
	}
	else if(n%4==1)
	{
		printf("0 A");
	}
	else if(n%4==2)
	{
		printf("1 B");
	}
	else
	{
		printf("2 A");
	}

	return 0;
} 

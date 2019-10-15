#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >>n;
	int a[n],b[n];
	
	for(int j=0;j<n;j++)
	{
		cin >> a[j];
	}
	for(int j=0;j<n;j++)
	{
		cin >> b[j];
	}
	
	int point = 0;
	
	for(int i = 0;i<n;i++)
	{
		if(a[i]>b[i])
		{
			point+=3; 
		}
		else if(a[i] == b[i])
		{
			point++;
		}
	}
	cout<<point<<endl;
	
	return 0;
 } 

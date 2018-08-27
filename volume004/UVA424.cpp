#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int ary[250], sum[250];
	
	for(int i = 0; i < 250; i++)
	{
		ary[i] = 0, sum[i] = 0;
	}
	while (cin >> s && s != "0")
	{    
		for(int i = s.size()-1; i >= 0; i--) 
		{
			ary[s.size()-1-i]=s[i]-'0';
		}
		for(int i = 0;i <= s.size()-1; i++)
		{
			sum[i] += ary[i];
		}
		for(int i = 0;i <= s.size()-1; i++)
		{
			if (sum[i] >= 10)
			{
				sum[i+1] += sum[i] / 10;
				sum[i] = sum[i] % 10;
			} 
		}      
	}
	for(int i = 200; i >= 0; i--)
	{
		if(sum[i] != 0) 
		{
			for(int j = i; j >= 0; j--)
			{
				cout << sum[j];
			}
			puts("");
			break;
		}
	} 
	return 0;        
}

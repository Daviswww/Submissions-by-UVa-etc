#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string s;
	
	cin >> n;
	
	for(int cas = 0; cas < n; cas++)
	{
		double tmp = 0, ans = 0;
		char typ;
		
		cin >> s;
		
		for(int i = 0; i < s.size(); i++)
		{
			
			if(s[i] >= 'A' && s[i] <= 'Z')
			{
				typ=s[i];
			} 
			if(s[i] >= '0' && s[i] <= '9')
			{
				tmp *= 10;
				tmp += (s[i]-'0');
				
			}
			if((s[i+1] >= 'A' && s[i+1] <= 'Z') || s[i+1]=='\0')
			{
				if(tmp==0)
				{
					tmp++;
				}
				if(typ=='C')
				{
					tmp *= 12.01;
				}
				else if(typ=='H')
				{
					tmp *= 1.008;
				}
				else if(typ=='O')
				{
					tmp *= 16.00;
				}
				else
				{
					tmp *= 14.01;
				}
				ans += tmp;	
				tmp = 0;
			}
		}
		printf("%.3lf\n", ans);
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;
void split(int &m, int &d, string d1)
{
	m = 0, d = 0;
	bool bb = false;
	for(int i = 0; i < d1.size(); i++)
	{
		if(d1[i] == '/')
		{
			bb = true;
			continue;
		}
		if(!bb)
		{
			m *= 10;
			m += d1[i] - '0';
		}
		else
		{
			d *= 10;
			d += d1[i] - '0';
		}
	}
}
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int s_m = 0, s_d = 0, e_m = 0, e_d = 0, ans = 0;
		string d1, d2;
		cin >> d1 >> d2;
		split(s_m, s_d, d1);
		split(e_m, e_d, d2);
		while(1)
		{
			if(s_m == e_m && s_d == e_d)
			{
				break;
			}
			bool useD[10];
			for(int i = 0; i <10; i++)
			{
				useD[i] = false;
			}
			if(s_d >= 10)
			{
				useD[s_d / 10] = true;
				useD[s_d % 10] = true;
			}
			else
			{
				useD[0] = true;
				useD[s_d] = true;
			}
			if(s_m >= 10)
			{
				useD[s_m / 10] = true;
				useD[s_m % 10] = true;
			}
			else
			{
				useD[0] = true;
				useD[s_m] = true;
			}
			int count = 0;
			for(int i = 0; i < 10; i++)
			{
				if(useD[i]) count++;
			}
			if(count <= 2)
			{
				if(s_m == 11)
				{
					if(s_d != 31)
					{
						ans++;
					}
				}
				else if(s_m != 4)
				{
					ans++;
				}
			}
			s_d++;
			if(s_d > 31)
			{
				s_m++;
				s_d = 1;
			}
			if(s_m > 12)
			{
				s_m = 1;
				s_d = 1;
			}
		}
		bool useD[10];
		for(int i = 0; i < 10; i++)
		{
			useD[i] = false;
		}
		if(s_d >= 10)
		{
			useD[s_d / 10] = true;
			useD[s_d % 10] = true;
		}
		else
		{
			useD[0] = true;
			useD[s_d] = true;
		}
		if(s_m >= 10)
		{
			useD[s_m / 10] = true;
			useD[s_m % 10] = true;
		}
		else
		{
			useD[0] = true;
			useD[s_m] = true;
		}
		int count = 0;
		for(int i = 0; i < 10; i++)
		{
			if(useD[i]) count++;
		}
		if(count <= 2)
		{
			if(s_m == 11)
			{
				if(s_d != 31)
				{
					ans++;
				}
			}
			else if(s_m != 4)
			{
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}


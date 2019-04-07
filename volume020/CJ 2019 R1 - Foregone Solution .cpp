#include<iostream>
#include<string>
using namespace std;
const int maxn = 105;
int main()
{
	int n;
	string m;
	cin >> n;	
	
	for(int i = 0;i < n; i++)
	{
		cin >> m;
		int a = 0, b = 0;
		bool go = false;
		char sa[maxn]={'\0'}, sb[maxn]={'\0'};
		for(int j = 0; j < m.size(); j++)
		{
			int k = 0;
			
			while(true)
			{
				if((m[j] - '0') - k == 4 || k == 4)
				{
					k++;
				}
				else
				{
					if(k > 0)
					{
						go = true;
					}
					if(go)
					{
						sa[a] = k+'0'; 
						a++;
					}
					sb[b] = m[j] - k;
					b++;
					/*
					a *= 10;
					a += k;
					b *= 10;
					b += (m[j] - '0') - k;
					*/
					break;
				}
			}
		}
		printf("Case #%d: %s %s\n", i+1, sa, sb);
	}
	return 0;
} 

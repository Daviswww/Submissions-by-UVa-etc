#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	
	while(cin >> str && str != "-")
	{
		int n, m, len = str.size();
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			string stt;
			cin >> m;
			for(int j = 0, k = m; j < len;k++, j++)
			{
				if(k == len)
				{
					k -= len;
				}
				stt[j] = str[k];
			}
			for(int j = 0; j < len; j++)
			{
				str[j] = stt[j];
			}
		}
		for(int i = 0; i < len; i++)
		{
			cout << str[i];
		}
		puts("");
	} 
	return 0;
}


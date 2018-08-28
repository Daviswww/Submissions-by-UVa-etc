#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str, ans;
	char flag;
	while(cin >> str && str != "~")
	{
		int k = 0, sum = 0;
		if(str.size() == 2)
		{
			flag = '0';
		}
		if(str.size() == 1)
		{
			flag = '1';
		}
		while(cin >> str && str != "#")
		{
			if(str.size() > 2)
			{
				for(int i = k; i < str.size() - 2 + k; i++)
				{
					ans[i] = flag;
				}
				k += str.size()-2;
			}
			if(str.size() == 2)
			{
				flag = '0';
			}
			if(str.size() == 1)
			{
				flag = '1';
			}
		}
		for(int i = 0; i < k; i++)
		{	
		
			sum += pow(2 , k-i-1) * (ans[i] - '0');
		}
		cout << sum << endl;
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	int prime[2005], w = 1;
	prime[0] = 1;
	for(int i = 1; i < 2000; i++)
	{
		int g = 0;
		for(int j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				g++;
			}
		}
		if(g == 2)
		{
			//cout << i << " ";
			prime[w] = i;
			w++;
		}
	}
	while(cin >> str)
	{
		int ans = 0;
		for(int i = 0; i < str.size(); i++)
		{
			int sum = str[i] - 'a' + 1;
			if(sum > 0)
			{
				ans += str[i] - 'a' + 1;
			}
			else
			{
				ans += str[i] - 'a' + 59;
			}
		}
		bool go = false;
		int i = 0;
		while(true)
		{
			if(prime[i] > ans)
			{
				break;
			}
			else if(prime[i] == ans)
			{
				go = true;
				break;
			}
			i++;
		}
		if(go)
		{
			cout << "It is a prime word." << endl;
		}
		else
		{
			cout << "It is not a prime word." << endl;
		}
	}
	return 0;
}


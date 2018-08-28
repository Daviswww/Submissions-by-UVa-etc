#include<bits/stdc++.h>

using namespace std;
int main ()
{
	ofstream fout;
	fout.open("Output.txt");
	string str;
	int ary[100] = {0}, n;
	while(cin >> n && n)
	{
		int sum = 0, max = 0;
		for(int i = 0; i <= n; i++)
		{
			int k = 0;
			getline(cin, str);
			
			for(int j = 0; j < str.size(); j++)
			{
				if(str[j] == 'X')
				{
					k++;
				}
			}
			if(i == 0)
			{
				continue;
			}
			if(k > max)
			{
				max = k;
			}
			ary[i] = k;
		}
		for(int i = 1; i <= n; i++)
		{
			sum += max - ary[i];
		}
		cout << sum << endl;
	}
	return 0;
}

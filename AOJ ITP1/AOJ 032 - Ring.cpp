#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	while(cin >> str)
	{
		string str1;
		cin >> str1;
		bool go = false;
		for(int i = 0; i < str.size(); i++)
		{
			int sum = 0;
			for(int j = i, k = 0; k < str1.size(); j++, k++)
			{
				if(j == str.size())
				{
					j -= str.size();
				}
				if(str[j] == str1[k])
				{
					sum++;
				}
				else
				{
					break;
				}
			}
			if(sum == str1.size())
			{
				go = true;
				break;
			}
		}
		if(go)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}

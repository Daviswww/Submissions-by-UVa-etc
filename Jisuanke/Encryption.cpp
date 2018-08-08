/*
https://nanti.jisuanke.com/t/373
input
Zoo
China
output
Dss
Glmre
*/
#include<iostream>

using namespace std;

int main()
{
	string str;
	while(cin >> str)
	{
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 4;
				if(str[i] > 'Z')
				{
					str[i] -= 26;
				}
				cout << str[i];
			}
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] += 4;
				if(str[i] > 'z')
				{
					str[i] -= 26;
				}
				cout << str[i];
			}
		}
		cout << endl;
	}
	return 0;
}

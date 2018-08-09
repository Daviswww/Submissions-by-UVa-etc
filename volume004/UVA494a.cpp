#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	while(getline(cin, str))
	{
		int word = 0;
		for(int i = 0; i < str.size(); i++)
		{
			if(isalpha(str[i]) && !isalpha(str[i+1]))
			{
				word++;
			}
		}
		cout << word << endl;
	}
	return 0;
}

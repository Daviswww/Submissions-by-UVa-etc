#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	while(cin >> str)
	{
		for(int i = str.size()-1; i >= 0; i--)
		{
			cout << str[i];
		}
		puts("");
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	
	while(cin >> str && str != "0")
	{
		int sum = 0;
		for(int i = 0; i < str.size(); i++)
		{
			sum += str[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}

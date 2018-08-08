/*
https://nanti.jisuanke.com/t/398
input
as$dfkjhkjkjdhf
asdfkj$lskdfj
werijweirjo$wie
output
3
*/
#include<iostream>

using namespace std;

int main()
{
	int ans = 0;
	string str;
	
	while(cin >> str)
	{
		for(int i = 0; i < str.size();i++)
		{
			if(str[i] == '$')
			{
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
} 

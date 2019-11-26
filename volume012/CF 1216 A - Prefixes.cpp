#include<bits/stdc++.h>

using namespace std;
const int N = 255;
int main()
{
	int n, ans = 0;
	string s;
	cin >> n;
	cin >> s;
	for(int i = 0; i < n; i+=2)
	{
		if(s[i] == s[i+1])
		{
			ans++;
			if(s[i] == 'a')
			{
				s[i] = 'b';
			}
			else
			{
				s[i] = 'a';
			}
		}
	}
	cout << ans << endl << s << endl;

	return 0;
} 

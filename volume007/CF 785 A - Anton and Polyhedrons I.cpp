#include<bits/stdc++.h>

using namespace std;


int main()
{
	int ans = 0, n, ary[255] = {0};
	string s;
	ary['T'] = 4;
	ary['C'] = 6;
	ary['O'] = 8;
	ary['D'] = 12;
	ary['I'] = 20;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> s;
		ans += ary[s[0]];
	}
 	
 	cout << ans << endl;
 	
	return 0;
} 

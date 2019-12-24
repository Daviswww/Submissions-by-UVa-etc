#include<bits/stdc++.h>

using namespace std;

const int N = 5;

int main()
{
	char s[N], str[N];
	bool go = false;
	scanf("%s", &s);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%s", &str);
		if(str[1] == s[1] || str[0] == s[0])
		{
			go = true;	
		}
	}
	
	if(go)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
} 
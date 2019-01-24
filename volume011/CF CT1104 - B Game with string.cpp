#include <bits/stdc++.h>
using namespace std;

int main() 
{	
	string s;
	int i, k = 0;
		
	cin >> s;
	for(i = 0; i < s.size(); i++)
	{
		while(s[i]==s[i+1] && s.size())
		{
			s.erase(i,2);
			i--;
			k++;
		}
	}
	printf(k&1 ? "Yes\n" : "No\n");
}

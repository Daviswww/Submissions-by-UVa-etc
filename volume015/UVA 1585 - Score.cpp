#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string s;
	
	cin >> n;
	
	for(int cas = 0; cas < n; cas++)
	{
		int score = 0, count = 0;
		
		cin >> s;
		
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == 'O')
			{
				count++;
				score += count;
				
			}
			else
			{
				count = 0;
			}
		}
		cout << score << endl;
	}
	return 0;	
} 

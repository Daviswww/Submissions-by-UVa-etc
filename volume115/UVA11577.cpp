#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	string str;
	int n;
	cin >> n;
	
	for(int g = 0; g < n+1; g++) 
	{
		int ary[305], max = 0;
		for(int i = 0; i < 305; i++) 
		{
			ary[i] = 0;
		}
		getline(cin, str);
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				ary[str[i] - 'a']++;
				if(ary[str[i] - 'a'] > max)
				{
					max = ary[str[i] - 'a'];
				}
			}
			if(str[i] >= 'A' && str[i] <= 'Z')
			{
				ary[str[i] - 'A']++;
				if(ary[str[i] - 'A'] > max)
				{
					max = ary[str[i] - 'A'];
				}
			}		
		}
		for(int i = 0; i < 305; i++) 
		{
			if(ary[i] == 0 ) 
			{
				continue;
			}
			if(ary[i] == max)
			{
				cout << char(i + 'a');
			}
		}
		if(g != 0)
		{
			cout << endl;
		}
	}
	return 0;
} 

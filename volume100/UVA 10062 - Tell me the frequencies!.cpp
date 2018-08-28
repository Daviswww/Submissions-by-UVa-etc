#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	string str;
	int ASC[250];
	bool go = false;	
	while(getline(cin, str))
	{
		int max = 0;
		if(go)
		{
			cout << endl;
		}
		for(int i = 0; i < 205; i++)
		{
			ASC[i] = 0;
		}
		for(int i = 0; i < str.size(); i++)
		{
			ASC[str[i]]++;
			if(max < ASC[str[i]])
			{
				max = ASC[str[i]];
			}
		}
		for(int j = 1; j <= max; j++)
		{
			for(int i = 200; i > 0; i--)
			{
				if(ASC[i] == j)
				{
					cout << i << " " << ASC[i] << endl;
				}
			}			
		}
		go = true;
	}
	return 0;
}

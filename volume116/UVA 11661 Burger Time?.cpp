#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	ofstream fout;
	fout.open("OutputFile.txt");
	string str;
	while(cin >> n && n)
	{
		int min = 2000001;
		cin >> str;
		
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] == 'Z')
			{
				min = 0;
				break;
			}
			if(str[i] == 'R')
			{
				for(int j = i+1; j < str.size(); j++)
				{
					if(str[j] == 'R')
					{
						break;
					}
					if(str[j] == 'D')
					{
						if(min > j - i)
						{
							min = j - i;
						}
						break;
					}
				}
			}
			if(str[i] == 'D')
			{
				for(int j = i+1; j < str.size(); j++)
				{
					if(str[j] == 'D')
					{
						break;
					}
					if(str[j] == 'R')
					{
						if(min > j - i)
						{
							min = j - i;
						}
						break;
					}
				}
			}			
		}
		//fout << min << endl;
		printf("%d\n", min);
	}
	return 0;
}

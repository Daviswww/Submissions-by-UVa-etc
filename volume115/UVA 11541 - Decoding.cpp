#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	int n;
	
	cin >> n;
	
	for(int g = 1; g <= n; g++)
	{
		int k = 0, p;
		cin >> str;
		printf("Case %d: ", g);
		for(int i = 0; i < str.size(); i++)
		{
			 if (isalpha(str[i]))
			 {
			 	if(!isalpha(str[i+1]))
			 	{
			 		p++;
			 		k += (str[i+1]-'0');
				 	if(!isalpha(str[i+2])&& i + 2 < str.size())
				 	{
				 		p++;
				 		k *= 10;
				 		k += (str[i+2]-'0');
					 	if(!isalpha(str[i+3])&& i + 3 < str.size())
					 	{
					 		p++;
					 		k *= 10;
					 		k += (str[i+3]-'0');
						}				 		
					}			 		
				}
				for(int j = 0; j < k; j++)
				{
					cout << str[i];
				}
				i += p-1;
				p = 0;
				k = 0;
			 }
		}
		cout << endl;	
	} 
	return 0;
} 

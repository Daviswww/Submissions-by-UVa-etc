#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int p1s = 0, p2s = 0;
		while(n--)
		{
			string p1, p2;
			int i = 0;
			cin >> p1 >> p2;
			while(i < max(p1.size(), p2.size()))
			{

				if(p1[i] > p2[i] || p2[i] == ' ')
				{
					p1s += 3;
					//cout <<"1"<< endl;
					break;
				}
				else if(p1[i] < p2[i] || p1[i] == ' ')
				{
					p2s += 3;
					//cout <<"2"<< endl;
					break;
				}
				else if(i == max(p1.size(), p2.size()) - 1)
				{
					p1s++, p2s++;
					//cout <<"-"<< endl;
					break;
				}
				else
				{
					i++;
				}		
			}
		}
		printf("%d %d\n", p1s, p2s);
	}
	return 0; 
} 

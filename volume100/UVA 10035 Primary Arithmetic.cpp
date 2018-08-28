//https://uva.onlinejudge.org/external/100/10035.pdf
#include<bits/stdc++.h>

using namespace std;
int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	int n, m;
	
	while(cin >> n >> m)
	{
		int k = 0, sum = 0;
		if(n == 0 && m == 0)
		{
			break;
		}
		else
		{
			while(true)
			{
				if(m == 0 || n == 0)
				{
					break;
				}
				else
				{
					sum += (n % 10) + (m % 10);
					n /= 10;
					m /= 10;
					if(sum > 9)
					{
						sum = 1;
						k++;
					}
					else
					{
						sum = 0;
					}					
				}
				if(m == 0 && sum == 1)
				{
					while(sum)
					{
						sum += (n % 10);
						n /= 10;
						if(sum > 9)
						{
							sum = 1;
							k++;
						}
						else
						{
							sum = 0;
						}						
					}
				}
				if(n == 0 && sum == 1)
				{
					while(sum)
					{
						sum += (m % 10);
						m /= 10;
						if(sum > 9)
						{
							sum = 1;
							k++;
						}
						else
						{
							sum = 0;
						}						
					}
				}
			}
			if(k == 0)
			{
				//fout <<"No carry operation." << endl; 
				printf("No carry operation.\n");
			}
			else if(k == 1)
			{
				//fout <<"1 carry operation." << endl; 
				printf("1 carry operation.\n");
			}
			else
			{
				//fout << k <<" carry operations." << endl; 
				printf("%d carry operations.\n", k);
			}			
		}
	}
	return 0;
}

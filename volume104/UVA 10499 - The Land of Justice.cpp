#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	long long n;
	
	while(cin >> n)
	{
		if( n < 0)
		{
			break;
		}
		else
		{
			if(n == 1)
			{
				//fout << "0%" << endl;
				printf("0\%\n");	
			}
			else
			{
				//fout << 25 * n <<"%"<< endl;
				printf("%lld\%\n", 25 * n);					
			}
		
		}
	}
	return 0;
} 

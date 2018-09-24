#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		char A[105], B[105];
		scanf("%s %s", A, B);
		int i, C[105] = {0}, Al = strlen(A), Bl = strlen(B), count = 0;
		for(i = 0; i < Al; i++)
		{
			C[i] += A[Al-i-1] - 48;
		}
		for(i = 0; i < Bl; i++)
		{
			C[i] += B[Bl-i-1] - 48;
		}
		for(i = 0; i < 100; i++)
		{
			if(C[i] >= 10)
			{
				C[i+1] += C[i]/10;
				C[i] %= 10;
				count++;
			}
		}
		int k = Al > Bl ? Al : Bl, p = 0;
		if(count > 0)
		{
			k++;
		}
		for(int i = 80; i >= 0; i--)
		{
			if(C[i] != 0)
			{
				p = i;
				break;
			}
		}
		if(k > 80)
		{
			cout << "overflow" << endl; 
			continue;
		}
		for(int i = p; i >= 0; i--)
		{
			cout << C[i];
		}
		if(n > 0)
		{
			cout << endl;
		}	
	}
	return 0;
}

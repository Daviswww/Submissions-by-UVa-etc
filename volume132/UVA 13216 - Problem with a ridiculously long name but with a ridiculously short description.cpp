#include<bits/stdc++.h>
	
using namespace std;
const int MAXN = 5;
const int re[MAXN] = {16, 56, 96, 36, 76};
int main()
{
	// 1  2  3  4  5  6  7  8
	//66 56 96 36 76 16 56 96
	int n;
	string str;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		cin >> str;
		if(str == "0")
		{
			printf("1\n");
		}
		else if(str == "1")
		{
			printf("66\n");
		}
		else
		{
			int tmp;
			if((str[str.size()-1] - '0') == 0)
			{
				tmp = 9;
			}
			else
			{
				tmp = (str[str.size()-1] - '0')-1;
			}
			printf("%d\n", re[ tmp % 5]);
		}
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;
const int MAXN = 20;
int main()
{
	int n;
	char cardNum[MAXN];
	scanf("%d", &n);
	getchar();
	for(int i = 0 ;i < n; i++)
	{
		int k = 1, tmp = 0, total = 0;
		gets(cardNum);
		for(int j = 0; cardNum[j] != '\0'; j++)
		{
			if(cardNum[j] != ' ')
			{
				if(k % 2 == 1)
				{
					tmp = (cardNum[j] - '0') * 2;
					total += tmp%10;
					total += tmp/10;
				}
				else
				{
					total += (cardNum[j] - '0');
				}
				k++;
			}
		}
		if(total%10 != 0)
		{
			printf("Invalid\n");
		}
		else
		{
			printf("Valid\n");
		}
	}
	return 0;
}

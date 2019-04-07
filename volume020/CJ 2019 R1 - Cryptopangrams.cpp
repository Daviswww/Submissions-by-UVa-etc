#include<iostream>
#include<string>

using namespace std;
const int maxn = 10005;
int ary[maxn], k = 0;
bool prime[maxn];

int main()
{
	int n, p, w;
	//cin >> n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int tmp[maxn] = {0}, pw[maxn] = {0}, pwkey[maxn] = {0}, tm;
		
		//cin >> p >> w;
		scanf("%d %d", &p, &w);
		for(int j = 0; j < w; j++)
		{
			cin >> tmp[j];
		}
		for(int j = 3; j < maxn; j++)
		{
			if(tmp[0] % j == 0)
			{
				pw[0] = j;
				tm = tmp[0]/j;
				pw[1] = tm;
				pwkey[tmp[0] / j] = 1;
				pwkey[j] = 1;
				break;
			}
		}
		for(int j = 1; j < w; j++)
		{
			if(tmp[j] != tmp[j-1])
			{
				tm = tmp[j] / tm;
			}
			pw[j+1] = tm;
			pwkey[tm] = 1;
		}
		printf("Case #%d: ", i+1);
		for(int h= 0, j = 'A'; j <= 'Z'; h++)
		{
			if(pwkey[h] == 1)
			{
				pwkey[h]=j;
				j++;
			}
		}
		for(int j = 0; j <= w; j++)
		{
			printf("%c",pwkey[pw[j]]);
		}
		puts("");
	}
	return 0;
}

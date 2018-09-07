#include<bits/stdc++.h>

using namespace std;
int ary[1000005];
bool prime[1000005];
 
int p(int n)
{
	int k = 0;
    for (int i=0; i <= n; i++)
    {
    	prime[i] = true;
	}
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
        	k++;
            for (int j = i+i; j < n; j+=i)
            {
                prime[j] = false;             	
			}    	
		}
	}
	return k;
}
int main()
{
	int n;
	
	while(cin >> n)
	{
		printf("%d\n", p(n));
	}
	return 0;
}

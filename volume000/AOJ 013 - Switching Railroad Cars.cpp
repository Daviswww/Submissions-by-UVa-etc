#include<bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	stack<int> A;
	int ary[105], i = 0;
	while(cin >> n)
	{
		if(n != 0)
		{
			A.push(n); 
		}
		else
		{
			ary[i] = A.top();
			A.pop();
			i++;
		}
	}
	for(int j = 0; j < i; j++)
	{
		printf("%d\n", ary[j]);
	}
	return 0;
}

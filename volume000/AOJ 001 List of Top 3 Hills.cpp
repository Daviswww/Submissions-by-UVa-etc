#include<bits/stdc++.h>
#define max(x, y) ((x) > (y) ? (x) : (y))
using namespace std;

int main()
{
	int tmp, ary[10005] = {0}, k = 0, t = 0;
	
	for(int i = 0; i < 10; i++)
	{
		cin >> tmp;
		ary[tmp]++;
		k = max(k, tmp);
	}
	while(t < 3)
	{
		if(ary[k] > 0)
		{
			ary[k]--;
			cout << k << endl;
			t++;
		}
		if(ary[k] != 0)
		{
			continue;
		}
		else
		{
			k--;
		}
	}
	return 0;
}

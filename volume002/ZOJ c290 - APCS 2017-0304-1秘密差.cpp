#include<bits/stdc++.h>

using namespace std;
const int maxn = 1005;
int main()
{
	bool go = true;
	string num;
	int a = 0, b = 0;
	cin >> num;
	for(int i= 0; i < num.size(); i++)
	{
		if(go)
		{
			go = false;
			b += num[i] - '0';
		}
		else
		{
			go = true;
			a += num[i] - '0';
		}
	}
	printf("%d\n", abs(a - b));
	return 0;
}

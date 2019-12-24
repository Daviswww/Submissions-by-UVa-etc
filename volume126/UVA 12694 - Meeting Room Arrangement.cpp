#include<bits/stdc++.h>

using namespace std;
const int N = 25;
typedef struct{
	int x;
	int y;
} node;

bool cmp(node a, node b){
	return a.y < b.y;
}

int main()
{
	int n;
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		int count = 0;
		node a[N] = {0};
		for(int i = 0; ; i++, count++)
		{
			cin >> a[i].x >> a[i].y;
			if(a[i].x == 0 && a[i].y == 0) 
			{
				break;
			}
		}

		sort(a, a+count, cmp);
		int L = 0, ans = 0;
		for(int i = 0; i < count; i++)
		{
			if(L <= a[i].x)
			{
				L = a[i].y;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

bool MaxCmp( int a, int b ) {return a > b;}
const int maxn = 200005;
int main()
{
	int n, m;
	long long ary[maxn] = {0}, ans = 0;
	string s;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++)
	{
		cin >> ary[i];
	}
	cin >> s;
	int count;
	for(int i = 0; i < n; i = count)
	{
		for(count = i; s[i] == s[count];count++);
		sort(ary+i, ary+count, MaxCmp);
		for(int tmp = i; tmp < i+m && tmp < count; tmp++)
		{
			ans += ary[tmp];
		}
	}
	cout << ans << endl;
	return 0;
}

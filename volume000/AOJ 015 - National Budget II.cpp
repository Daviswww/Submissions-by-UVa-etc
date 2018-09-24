#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s1, s2, ans = "";
		cin >> s1 >> s2;
		int len1 = s1.length() - 1, len2 = s2.length() - 1, mlen = max(len1, len2);
		int pre = 0;
		for (int i = 0; i <= mlen; i++)
		{
			int sum = pre;
			sum += (len1 >= 0) ? s1[len1--] - '0' : 0;
			sum += (len2 >= 0) ? s2[len2--] - '0' : 0;
			pre = sum / 10;
			sum -= pre * 10;
			ans += '0' + sum;
		}
		if (pre > 0) 
		{
			ans += '0' + pre;
		}
		reverse(ans.begin(), ans.end());
		if (ans.length() > 80)
		{
			puts("overflow");
		}
		else
		{
			cout << ans << endl;
		}
	}
	return 0;
}

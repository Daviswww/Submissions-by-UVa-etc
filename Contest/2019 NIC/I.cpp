#include<bits/stdc++.h>

using namespace std;
const int N = 30;
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int n, a[N] = {0};
	string s1, s2;
	
	cin >> n >> s1 >> s2;
	
	for(int i = 0; i < n; i++)
	{
		if(s1[i] == s2[i])
		{
			a[s1[i]-'a']++;
		}
		else
		{
			a[s1[i]-'a']++;
			a[s2[i]-'a']++;
		}
	}
	
	sort(a, a+N, cmp);

	cout << a[0] << endl;
	return 0;
}

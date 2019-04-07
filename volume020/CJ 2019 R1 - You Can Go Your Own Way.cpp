#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, m;
	string s;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> m >> s;
		printf("Case #%d: ", i+1);
		for(int i = 0; i < s.size();i++)
		{
			if(s[i] == 'E')
			{
				cout << "S";
			}
			else
			{
				cout << "E";
			}
		}
		puts("");
	}
	return 0;
}

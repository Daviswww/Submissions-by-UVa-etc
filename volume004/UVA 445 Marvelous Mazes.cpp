#include<bits/stdc++.h>

using namespace std;

int main()
{

char c;
int n = 0;
	while ( (c = getchar()) != EOF )
	{
		if (c == '\n' || c == '!')
		{
			cout << endl;
		}
		else if (c >= '0' && c <= '9')
		{
			n += (c - '0');
		}
		else
		{
			if (c == 'b')
			{
				for (int i = 0; i < n ; i++)
				{
					cout << " ";
				}
			}
			else
			{
				for (int i = 0; i < n ; i++)
				{
					cout << c;
				}
			}
			n = 0;
		}
	}
	return 0;
}

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int atk[1005], hp[1005], day = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> atk[i];
		}
		for(int i = 0; i < n; i++)
		{	
			cin >> hp[i];
		}
		if(atk[0] > hp[0])
		{
			cout << "0" << endl;
		}
		else
		{
			day = hp[0] - atk[0];
			for(int i = 0; i < n; i++)
			{
				atk[i] += day;
				if(atk[i] > hp[i])
				{
					break;
				}
				if(hp[i] > atk[i])
				{
					day++;
					break;
				}
			}
			cout << day << endl;
		}
	}
	return 0;
}

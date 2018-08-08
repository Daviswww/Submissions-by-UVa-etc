#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int n;
	while(cin >> n)	
	{
		double x[25], y[25];
		string name;
		if(n == 0) break;
		for(int i= 0; i < n * 2; i++)
		{
			cin >> name >> x[i] >> y[i];
		}
		
		double max[15];
		for(int j = 0; j < n; j++)
		{
			max[i] = 1001;
			int pon;
			for(int i = 0; i < n * 2; i++)
			{
				double tx = 0;
				tx = sqrt((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]));
				if(max[j] > tx)
				{
					max[j] = tx;
					pon = i;
				}
			}
			for(int u = 0; u < n * 2; u++)
			{
				if(o == u || p == u)
			}
		}	
	}
	return 0;
}

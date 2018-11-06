#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	int minn;
	while(cin >> minn)
	{
		string name;
		double sum = minn, maxn = minn;
		
		for(int i = 0; i < 6 ;i++)
		{
			int temp;
			cin >> temp;
			sum += temp;
			if(temp > maxn)
			{
				maxn = temp;
			}
			if(temp < minn)
			{
				minn = temp;
			}
		}
		cin >> name;
		cout << name <<" ";
		printf("%.2lf\n", (sum - maxn - minn) / 5);
	}
	return 0;
}

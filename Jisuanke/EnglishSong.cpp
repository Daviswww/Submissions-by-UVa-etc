/*
https://nanti.jisuanke.com/t/324
input
10 10 10 10 10 10 9 xiaoyuanwang
0 0 0 0 0 0 0 beast
output
xiaoyuanwang 10.00
beast 0.00
*/

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

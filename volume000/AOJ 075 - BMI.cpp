#include<bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c;
	int ary[55] = {0}, i = 0;
	while(scanf("%lf,%lf,%lf", &a, &b, &c) != EOF)
	{
		double bmi = b / (c * c);
		if(bmi >= 25)
		{
			ary[i++] = a;
		}
	}
	for(int j = 0; j < i; j++)
	{
		cout << ary[j] << endl;
	}
	return 0;
} 

#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
	double avg, sum = 0.0, a[12] = {0};
	for(int i = 0; i < 12; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	avg = sum /12;
	printf("$%.2f", avg);
	return 0;
}

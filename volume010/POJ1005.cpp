#include<iostream>
#include<cstdio>
#include<cmath>
#define PI 3.14159265
using namespace std;
int p, yar;
float x, y;
double c;
int main(void)
{
	cin >> p;
	for(int i = 1; i <= p; i++)
	{
		scanf("%f %f", &x, &y);
		c = (x*x+y*y)*PI/2/50;
		yar = ceil(c);
		printf("Property %d: This property will begin eroding in year %d.\n", i, yar);
	}
	cout<<"END OF OUTPUT.";
} 

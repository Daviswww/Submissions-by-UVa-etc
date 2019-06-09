#include<stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
double div(double, double);
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("add(x, y): %d\n", add(x, y));
	printf("sub(x, y): %d\n", sub(x, y));
	printf("mul(x, y): %d\n", mul(x, y));
	printf("div(x, y): %lf\n", div((double)x, (double)y));
	return 0;
}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
double div(double a, double b)
{
	return a / b;
}

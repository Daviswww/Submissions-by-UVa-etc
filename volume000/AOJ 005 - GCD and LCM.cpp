#include<bits/stdc++.h>
int GCD(int, int);
int LCM(int, int);
using namespace std;

int main()
{
	int x, y;
	while(cin >> x >> y)
	{
		printf("%d %d\n", GCD(x, y), LCM(x, y));
	}
	return 0;
}
int GCD(int m, int n) { 
    if(n == 0) 
        return m; 
    else 
        return GCD(n, m % n); 
}

int LCM(int a, int b)
{
    int temp = GCD(a, b);

    return temp ? (a / temp * b) : 0;
}

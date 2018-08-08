#include<bits/stdc++.h>
#define max(x, y) ((x) > (y) ? (x) : (y))
#define min(x, y) ((x) < (y) ? (x) : (y))
#define swap(x, y) {int tmp; tmp = x, x = y, y = tmp;}
using namespace std;

int main()
{
	int a = 10, b = 5;
	cout <<"max = " <<max(a, b) << endl;
	cout <<"min = " <<min(a, b) << endl;
	swap(a, b);
	cout <<"swap = "<< a << " " << b << endl;
	return 0;
}


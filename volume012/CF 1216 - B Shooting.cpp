#include<bits/stdc++.h>
#define swap(X, Y) {int Z; Z = Y; Y = X; X = Z;}
using namespace std;
const int N = 10000;

struct node
{
	int index, value;
}a[N];

bool cmp(node a, node b)
{
	return a.value > b.value;
}

int main()
{
	int n, sum = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		a[i].index = i+1;
		cin >> a[i].value;
	}
	
	sort(a, a+n, cmp);
	
	for(int i = 0; i < n; i++)
	{
		sum += i * a[i].value + 1;
	}
	
	cout << sum << endl;
	
	for(int i = 0; i < n; i++)
	{
		cout << a[i].index << " ";
	}
	
	cout << endl;

	return 0;	
}

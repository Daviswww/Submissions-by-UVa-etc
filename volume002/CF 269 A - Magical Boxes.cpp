#include <iostream>
#include <algorithm>
using namespace std;
 
struct Box
{
	int size;
	int n;
};
 
bool comp(Box a, Box b)
{
	return a.size > b.size;
}
 
int main()
{
	int N;
	Box b[100000];
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> b[i].size >> b[i].n;
	}
	
	sort(b, b + N, comp);
	
	int ns = b[0].size;
	long long x = 1, mb = 1e9, max = 0;
	for(int i = 0; i < N && x <= mb; ++i)
	{
		while(ns > b[i].size && x <= mb)
		{
			x *= 4;
			--ns;
		}
				
		if(x <= mb)
		{
			int t = b[i].n / x + (b[i].n % x == 0 ? 0 : 1);
			if(t > max)
			{
				max = t;
			}
		}
	}
	
	int ans = b[0].size;
	while(max > 4)
	{
		max = max / 4 + (max % 4 == 0 ? 0 : 1);
		++ans;
	}
	
	cout << ans + 1 << endl;
 
    return 0;
}

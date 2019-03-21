#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	int N, M, USB[100];
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> USB[i];
	}
	
	// 大排到小 
	sort(USB, USB + N, comp);
	
	// 一個一個塞，塞到塞不下或是夠了為止 
	int ans = 0;
	while(ans < N && M > 0)
	{
		M -= USB[ans];
		++ans;
	}
	
	cout << ans << endl;

    return 0;
}


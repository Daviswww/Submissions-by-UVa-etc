#include <iostream>
#include <algorithm>
using namespace std;

struct T
{
	int time;
	int type;
};

bool comp(T a, T b)
{
	if(a.time == b.time)
	{
		return a.type > b.type;
	}
	return a.time < b.time;
}

int main()
{
	int N, ans;
	bool check[5007];
	T lesson[10007], sorted[10007];
	
	cin >> N;
	ans = N;
	for(int i = 0; i < N; ++i)
	{
		cin >> lesson[i * 2].time >> lesson[i * 2 + 1].time;
		lesson[i * 2].type = 0;
		lesson[i * 2 + 1].type = 1;
		
		sorted[i * 2] = lesson[i * 2];
		sorted[i * 2 + 1] = lesson[i * 2 + 1];
	}

	sort(sorted, sorted + N * 2, comp);
	
	int count = 0, l = -1, r = -1, maxi = 0;
	for(int i = 0; i < N * 2; ++i)
	{
		if(sorted[i].type == 0)
		{
			++count;
		}
		else
		{
			--count;
		}
		
		if(count == 2)
		{
			if(l == -1)
			{
				l = sorted[i].time;
				r = sorted[i + 1].time;
			}
			else
			{
				r = sorted[i + 1].time;
			}
		}
		
		if(count > maxi)
		{
			maxi = count;
		}
		
		if(maxi > 2)
		{
			break;
		}
	}
	
	if(maxi > 2)
	{
		ans = 0;
	}
	else if(maxi < 2)
	{
		ans = N;
		for(int i = 0; i < N; ++i)
		{
			check[i] = true;
		}
	}
	else
	{
		ans = N;
		for(int i = 0; i < N; ++i)
		{
			check[i] = true;
			if(lesson[i * 2].time > l || lesson[i * 2 + 1].time < r)
			{
				--ans;
				check[i] = false;
			}
		}
	}
	
	bool first = true;
	cout << ans << endl;
	if(ans != 0)
	{
		for(int i = 0; i < N; ++i)
		{
			if(check[i])
			{
				if(!first)
				{
					cout << " ";
				}
				
				cout << i + 1;
				first = false;
			}
		}
		cout << endl;
	}
	
	return 0;
}

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int AMAX = 1e5 + 7;

struct Beacon
{
	int a;
	int b;
};

bool comp(Beacon a, Beacon b)
{
	return a.a < b.a;
}

int N, des[AMAX][2], ans, s;
Beacon beacon[AMAX];

void bsearch(int n, int l, int r)
{
	if(l >= r)
	{
		return;
	}
	
	int mid = (l + r) / 2;
	if(beacon[mid].a < n)
	{
		s = max(s, mid);
		
		bsearch(n, mid + 1, r);
	}
	else
	{
		bsearch(n, l, mid);
	}
	
	return;
}

int main()
{
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> beacon[i].a >> beacon[i].b;
	}

	sort(beacon, beacon + N, comp);
	
	ans = N - 1;	
	des[0][0] = N;
	des[0][1] = N - 1;
	for(int i = 1; i < N; ++i)
	{
		des[i][0] = min(des[i - 1][0], des[i - 1][1]);
		
		s = -1;
		bsearch(beacon[i].a - beacon[i].b, 0, i);
		if(s == -1)
		{
			des[i][1] = N - 1;
		}
		else
		{
			des[i][1] = des[s][1] - 1;
		}
		
		ans = min(ans, min(des[i][0], des[i][1]));
	}

	cout << ans << endl;

    return 0;
}


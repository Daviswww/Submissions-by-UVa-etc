#include <iostream>
#include <algorithm>
using namespace std;

struct P
{
	int x;
	int y;
};

bool comp(P a, P b)
{
	if(a.x == b.x)
	{
		return a.y < b.y;
	}
	return a.x < b.x;
}

int main()
{
	int N, M, K, T;
	P W[1007], Q;
	
	cin >> N >> M >> K >> T;
	
	for(int i = 0; i < K; ++i)
	{
		cin >> W[i].x >> W[i].y;
	}
	
	sort(W, W + K, comp);
	
	for(int i = 0; i < T; ++i)
	{
		cin >> Q.x >> Q.y;
		
		int waste_n = K;
		bool is_waste = false;
		for(int j = 0; j < K; ++j)
		{
			if(W[j].x == Q.x && W[j].y == Q.y)
			{
				is_waste = true;
				break;
			}
			else if(W[j].x > Q.x || (W[j].x == Q.x && W[j].y > Q.y))
			{
				waste_n = j;
				break;
			}
		}
		
		if(is_waste)
		{
			cout << "Waste" << endl;
		}
		else
		{
			int n = (Q.x - 1) * M + Q.y - waste_n;
			switch(n % 3)
			{
				case 0:
					cout << "Grapes" << endl;
					break;
				case 1:
					cout << "Carrots" << endl;
					break;
				case 2:
					cout << "Kiwis" << endl;
					break;	
			};
		}
	} 

	return 0;
}

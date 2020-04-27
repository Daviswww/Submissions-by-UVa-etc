#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Good
{
	int buy;
	int sell;
	int stock;
};

struct Trade
{
	int spread;
	int num;
};

bool comp(Trade a, Trade b)
{
	return a.spread > b.spread;
}

int trading(Trade trade[100], int M, int K)
{	
	int profit = 0, now = 0;
	while(K > 0)
	{
		if(trade[now].spread < 0 || now == M)
		{
			break;
		}
		else if(trade[now].num >= K)
		{
			profit += trade[now].spread * K;
			break;
		}
		else if(trade[now].num > 0)
		{
			profit += trade[now].spread * trade[now].num;			
			K -= trade[now].num;
			++now;
		}
		else
		{
			++now;
		}
	}
	
	return profit;
}

int main()
{
	int N, M, K, profit, ans = 0;
	string planet;
	Good good[10][100];
	Trade trade[100];
	
	cin >> N >> M >> K;
	for(int i = 0; i < N; ++i)
	{
		cin >> planet;
		for(int j = 0; j < M; ++j)
		{
			cin >> good[i][j].buy >> good[i][j].sell >> good[i][j].stock;
		}
	}

	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < N; ++j)
		{
			for(int k = 0; k < M; ++k)
			{
				trade[k].spread = good[j][k].sell - good[i][k].buy;
				trade[k].num = good[i][k].stock;
			}
			
			sort(trade, trade + M, comp);			
			profit = trading(trade, M, K);
						
			if(profit > ans)
			{
				ans = profit;
			}
		}
	}
	
	cout << ans << endl;

	return 0;
}

#include <iostream>
using namespace std;

int N, M, B[100];

// 耞程nГぃГ眔 
bool sit(int n)
{
	// ㄓㄓM 
	int p = M;
	// 禲┮Τ慈 
	for(int i = 0; i < N; ++i)
	{
		// ぃ镑杠р干 
		p -= (B[i] < n ? n - B[i] : 0);
		
		// ノЧГ眔 
		if(p <= 0)
		{
			return true;
		}
	}
	
	// Гぃ 
	return false;
}

// 穓碝程慈程ぶГぶГ
int bsearch(int l, int r)
{
	// 絛瞅ぃ猭穓碝挡 
	if(l > r)
	{
		return 99999;
	}
	
	// 穓碝mid 
	int mid = (l + r) / 2, ret = 99999;
	// –眎程midГ眔 
	if(sit(mid))
	{
		// ┕т 
		ret = bsearch(l, mid - 1);
		// 肚ゑ耕 
		return (ret < mid ? ret : mid);
	}
	// Гぃ 
	else
	{
		// ┕т 
		return bsearch(mid + 1, r);
	}
	
	return 99999;
}

int main()
{	
	int mini = 99999, maxi = 0;

	// 块 
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> B[i];
	
		// 癘程	
		if(B[i] > maxi)
		{
			maxi = B[i];
		}
	}
	
	// 程ぃゑセ程临ぃゑ场Гセ程临穓碝maxi ~ maxi + M
	mini = bsearch(maxi, maxi + M);
	// 程碞琌场Гセ程 
	maxi += M;
	
	// 块 
	cout << mini << " " << maxi << endl;

    return 0;
}


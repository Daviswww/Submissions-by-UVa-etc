#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long N, M, Max = 0, Min = 0, A, B;
	long long Compress[100000];
	
	// 輸入順便計算完全不壓縮的總量、完全壓縮的總量、每一項壓縮後會少多少容量 
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> A >> B;
		Max += A;
		Min += B;
		Compress[i] = B - A;
	}
	
	// 減少量從小排到大，減最多的在最前面 
	sort(Compress, Compress + N);
	
	// 容量夠完全容納，不用壓縮了 
	if(M >= Max)
	{
		cout << 0 << endl;
	}
	// 全部壓縮了也不夠，不可能 
	else if(M < Min)
	{
		cout << -1 << endl;
	}
	// 壓縮後可以放 
	else
	{
		// 容量 < 現在總量就繼續，壓縮一項後再判斷 
		long long ans = 0;
		while(M < Max)
		{
			Max += Compress[ans];
			++ans;
		}
		
		cout << ans << endl;
	}

    return 0;
}


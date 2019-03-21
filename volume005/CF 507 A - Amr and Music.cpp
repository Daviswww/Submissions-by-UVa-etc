#include <iostream>
#include <algorithm>
using namespace std;

// 存樂器編號跟要學的天數 
struct Instrument
{
	int index;
	int days;
};

// 比較函式，依天數小到大 
bool comp(Instrument a, Instrument b)
{
	return a.days < b.days;
}

int main()
{
	int N, K;
	Instrument A[100];
	cin >> N >> K;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i].days;
		// 紀錄編號 
		A[i].index = i + 1;
	}
	
	// 依天數小排到大 
	sort(A, A + N, comp);
	
	int ans = 0;
	// 還有的學而且還能學的話就繼續 
	while(ans < N && K >= A[ans].days)
	{
		K -= A[ans].days;
		++ans;
	}
	
	cout << ans << endl;
	for(int i = 0; i < ans; ++i)
	{
		if(i != 0)
		{
			cout << " ";
		}
		cout << A[i].index;
	}
	cout << endl;

    return 0;
}


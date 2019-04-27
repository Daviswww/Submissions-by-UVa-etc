#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 全域變數，方便函式不用傳值 
int ans = 1e6;
string str;

// 檢查子字串長度為n時有沒有共同字元c 
bool check(int n)
{
	// 子字串中每個字元的出現次數 
	int used[26];
	fill(used, used + 26, 0);
	// 第一個子字串中每個字元式是否有出現 
	bool ini[26];
	fill(ini, ini + 26, false);
	
	// 計算第一個子字串的資訊 
	for(int i = 0; i < n; ++i)
	{
		++used[str[i] - 'a'];
		ini[str[i] - 'a'] = true;
	}
	
	// 第二個以後的子字串 
	for(int i = n; i < str.length(); ++i)
	{
		// 去掉最左邊的字元，加入最右邊的字元 
		--used[str[i - n] - 'a'];
		++used[str[i] - 'a'];
		
		// 比對所有字 
		for(int j = 0; j < 26; ++j)
		{
			// 如果第一個子字串有的字，這個子字串沒有
			if(ini[j] && used[j] == 0)
			{
				// 設為不共同 
				ini[j] = false;
			}
		}
	}
	
	// 回傳有沒有共同字元
	bool ret = false;
	for(int i = 0; i < 26; ++i)
	{
		 
		ret |= ini[i];
	}
	
	return ret;
}

// 二分搜尋法 
void bsearch(int l, int r)
{
	// 沒有可以搜尋的範圍了，結束搜尋 
	if(l > r)
	{
		return;
	}
	
	// 判斷中央 
	int mid = (l + r) / 2;
	// 中央可以，往小的找 
	if(check(mid))
	{
		// 紀錄最小值 
		if(mid < ans)
		{
			ans = mid;
		}
		
		bsearch(l, mid - 1);
	}
	// 中央不可以，往大的找 
	else
	{
		bsearch(mid + 1, r);
	}
}

int main()
{
	// 輸入 
	cin >> str;
	
	// 搜尋 
	bsearch(0, str.length());
	
	// 輸出 
	cout << ans << endl;

    return 0;
}


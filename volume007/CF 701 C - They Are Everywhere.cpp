#include <iostream>
#include <string>
using namespace std;

// 將a-zA-Z對應到0-51 
int type(char c)
{
	if('a' <= c && c <= 'z')
	{
		return c - 'a';
	}
	
	return c - 'A' + 26;
}

// 二元搜尋法
// str是輸入的字串，target是要找到的字母種類 
// l是搜尋下限，r是搜尋上限，範圍是[l, r) 
int bsearch(string str, int target, int l, int r)
{	
	// 先創個陣列，將所有字母的出現次數歸0 
	// mid是現在要找的寬度 
	int total = 0, count[52], mid = (l + r) / 2;
	for(int i  = 0; i < 52; ++i)
	{
		count[i] = 0;
	}
	
	// n是以現在中間值的寬度來找能不能找到target個字母
	// m是左半部或右半部範圍中能找到target個字母的最小寬度 
	// 先初始化，因為有可能這個寬度不行，這樣不行時也不會出錯 
	int n = str.length(), m = n + 1;
	
	// 先取前面mid個字，看有沒有target種字母 
	for(int i = 0; i < mid; ++i)
	{
		int t = type(str[i]);
		++count[t];
		
		// 如果字母出現次數從0=>1 
		if(count[t] == 1)
		{
			// 多出現了一種字母 
			++total;
		}
		
		// 字母數達到需求 
		if(total == target)
		{
			// 現在的寬度可行，記起來 
			n = mid;
			// 如果左邊有東西 
			if(l != r - 1)
			{
				// 試試看能不能找到更小的，更改搜尋上限再試一次 
				m = bsearch(str, target, l, mid);
			}
			
			break;
		}
	}
	
	// 前面mid個找不到target種字母，範圍要往右移 
	for(int i = mid; i < str.length() && n != mid; ++i)
	{
		// 要維持寬度是mid，所以右邊多一個，左邊就要少一個 
		
		// 右邊多找一個字
		int right = type(str[i]);
		++count[right];
		
		// 如果字母出現次數從0=>1 
		if(count[right] == 1)
		{
			// 多出現了一種字母 
			++total;
		}
		
		// 左邊少找一個字 
		int left = type(str[i - mid]);
		--count[left];
		
		// 如果字母出現次數從1=>0 
		if(count[left] == 0)
		{
			// 少出現了一種字母 
			--total;
		}
		
		// 字母數達到需求 
		if(total == target)
		{
			// 現在的寬度可行，記起來 
			n = mid;
			// 如果左邊有東西 
			if(l != r - 1)
			{
				// 試試看能不能找到更小的，更改搜尋上限再試一次 
				m = bsearch(str, target, l, mid);
			}
			
			break;
		}
	}
	
	// 如果現在的寬度不可行 
	if(n != mid)
	{
		// 看看右邊還有沒有東西 
		if(l != r - 1)
		{
			// 試試看右邊能不能找到可以的，更改搜尋下限再試一次 
			m = bsearch(str, target, mid, r);
		}
	}
	
	// 回傳比較小的 
	return (n < m ? n : m);
}

int main()
{
	int N;
	string str;	
	cin >> N >> str;
	
	// 先創個陣列，將所有字母的出現次數歸0 
	int total = 0, count[52];
	for(int i  = 0; i < 52; ++i)
	{
		count[i] = 0;
	}
	
	// 先找看看總共有幾種字母 
	for(int i = 0; i < N; ++i)
	{
		int t = type(str[i]);
		++count[t];
		
		// 如果字母出現次數從0=>1 
		if(count[t] == 1)
		{
			// 多出現了一種字母 
			++total;
		}
	}
	
	// 將從str中找total個字母，寬度是[0, N]中的最小寬度的結果輸出 
	cout << bsearch(str, total, 0, N + 1) << endl;
	
    return 0;
}


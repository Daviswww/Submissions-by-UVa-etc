#include <iostream>
using namespace std;

// 檢查從s月開始的n個月，month中的天數是否與指定的days中的天數一致 
bool check(int month[12], int s, int n, int *days)
{
	for(int i = 0, m = s; i < n; ++i, ++m)
	{
		// m對12取餘數保證月份在合法範圍內 
		if(month[m % 12] != days[i])
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	int N, days[24];
	// 紀錄輸入了幾個29，在24個月中不可能有超過一個的29天 
	int flag = 0;
	// 平常整年的每月天數 
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	// 輸入月數 
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		// 輸入天數 
		cin >> days[i];
		
		// 有29天的話，把次數記起來 
		if(days[i] == 29)
		{
			++flag;
			// 然後調整成28天，因為2月只有連續兩次29天是不可能的，其他狀況沒有區別 
			days[i] = 28;
		}
	}
	
	// 有兩個以上的29天，不可能 
	if(flag > 1)
	{
		cout << "NO" << endl;
	}
	else
	{
		bool suc = false;
		// 試試看每個起始月份 
		for(int i = 0; i < 12; ++i)
		{
			if(check(month, i, N, days))
			{
				suc = true;
				break;
			}
		}
		
		// 輸出 
		cout << (suc ? "YES" : "NO") << endl;
	}

    return 0;
}


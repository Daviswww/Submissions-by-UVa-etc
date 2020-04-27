#include <iostream>
#include <string>
using namespace std;

int main()
{
	int K, ch[26];
	string str;
	
	for(int i = 0; i < 26; ++i)
	{
		ch[i] = 0;
	}
	
	cin >> K >> str;
	for(int i = 0; i < str.length(); ++i)
	{
		++ch[str[i] - 'a'];
	}
	
	bool ok = true;
	for(int i = 0; i < 26; ++i)
	{
		if(ch[i] % K != 0)
		{
			ok = false;
			break;
		}
	}

	if(ok)
	{
		int step = str.length() / K, beg = 0;
		for(int i = 0; i < 26; ++i)
		{
			for(int j = 0; j < ch[i]; j += K)
			{
				for(int k = 0; k < K; ++k)
				{
					str[beg + k * step] = i + 'a';
				}
				
				++beg;
			}
		}
		
		cout << str;
	}
	else
	{
		cout << -1 << endl;
	}

	return 0;
}

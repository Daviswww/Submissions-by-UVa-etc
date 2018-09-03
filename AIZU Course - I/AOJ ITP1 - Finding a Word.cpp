#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	
	while(cin >> str)
	{
		string stt;
		int word = 0;
		while(cin >> stt && stt != "END_OF_TEXT")
		{
			for(int i = 0; i < stt.size(); i++)
			{
				if(stt[i] >= 'A' && stt[i] <= 'Z')
				{
					stt[i] += 32;
				}
			}
			if(stt == str)
			{
				word++;
			}
		}
		cout << word << endl;
	}
	return 0;
}


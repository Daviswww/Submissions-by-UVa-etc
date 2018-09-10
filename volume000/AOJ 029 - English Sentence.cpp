#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str, box[1005], stt;
	int k = 0, ary[1005], max1 = 0, max2 = 0, w = 0;

	while(cin >> str)
	{
		bool go = true;		
		if(str.size() > max1)
		{
			max1 = str.size();
			stt = str;
		}
		box[k] = str;
		k++;
	}
	for(int i = 0; i < k; i++)
	{
		int sum = 0;
		for(int j = 0;j < k; j++)
		{
			if(box[i] == box[j])
			{
				sum++;
			}
			if(max2 < sum)
			{
				max2 = sum;
				w = i;
			}
		}
	}
	cout << box[w] << " " << stt << endl;
	return 0;
}

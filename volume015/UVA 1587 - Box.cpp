#include<bits/stdc++.h>
#define swaps(X, Y) { int Z; if(X>Y){ Z = X; X = Y; Y = Z;}}
#define	swap(X, Y) { int Z; Z = X; X = Y; Y = Z; }
using namespace std;
const int maxn = 10005;

int main()
{
	
	int w, h, k = 0, p, box[10][5] = {0};
	
	while(cin >> box[0][0] >> box[0][1])
	{
		swaps(box[0][0], box[0][1]);
		if(box[0][0] == box[0][1])
		{
			k++;
		}
		for(int i = 1; i < 6; i++)
		{
			cin >> box[i][0] >> box[i][1];
			swaps(box[i][0], box[i][1]);
			if(box[i][0] == box[i][1])
			{
				k++;
			}
		}
		for(int i = 0; i < 6; i++)
		{
			for(int j = i; j < 6; j++)
			{

				if(box[i][0] > box[j][0])
				{
					swap(box[i][0], box[j][0]);
					swap(box[i][1], box[j][1]);
				}
				if(box[i][1] > box[j][1])
				{
					swap(box[i][0], box[j][0]);
					swap(box[i][1], box[j][1]);
				}
			}
		}
		//printf("weq: %d\n", k);
		bool go = true;
		for(int i = 0; i < 5; i+=2)
		{
			if(box[i][0] != box[i+1][0] || box[i][1] != box[i+1][1] || (k > 2 && k < 6 && k!=1))
			{
				go = false;
			}
		}

		if(go)
		{
			cout << "POSSIBLE" << endl;
		}
		else
		{
			cout << "IMPOSSIBLE" << endl;
		}
		k = 0;
	}
	return 0;
} 

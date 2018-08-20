#include<bits/stdc++.h>
#define EX 1e-1

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	int x, y;
	
	while(cin >> x >> y && (x && y ))
	{
		int p = 1, q;
		if( x == 1 && y == 1)
		{
			printf("0 1\n");
			//fout << "0 1" << endl;
			continue;
		}
		else
		{
			while(x != (int)(pow(pow( y, 1.0 / p) + 1.0, p) + EX)) 
			{
				p++;
			}
			q = int(pow(y, 1.0 / p) + EX);
			if(q != 1)
			{
				printf("%d %d\n", int((1 - y) / (1 - q)), int((x - y) * (q + 1) + y) );
				//fout << (1 - y) / (1 - q) << " " << int((x - y) * (q + 1) + y) << endl;
			}
			else
			{
				printf("%d %d\n", int(p), int((x - y) * (q + 1) + y) );
				//fout << p << " " << int((x - y) * (q + 1) + y) << endl;
			}
		}
	}
	return 0;
}

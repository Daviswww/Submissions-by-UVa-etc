#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	long long brown[5], green[5], clear[5], ary[10];
	string str[10];
	char g;
	str[0] = "BCG", str[1] = "BGC", str[2] = "CBG", str[3] = "CGB", str[4] = "GBC", str[5] = "GCB";
	while(cin >> brown[0])
	{
		int mi = 0;
		cin >> green[0] >> clear[0] >> brown[1] >> green[1] >> clear[1] >> brown[2] >> green[2] >> clear[2];
		
		ary[0] = brown[1]+brown[2]+green[0]+green[1]+clear[0]+clear[2];
		ary[1] = brown[1]+brown[2]+green[0]+green[2]+clear[0]+clear[1];
		ary[2] = brown[0]+brown[2]+green[0]+green[1]+clear[1]+clear[2];
		ary[3] = brown[0]+brown[1]+green[0]+green[2]+clear[1]+clear[2];
		ary[4] = brown[0]+brown[2]+green[1]+green[2]+clear[0]+clear[1];
		ary[5] = brown[0]+brown[1]+green[1]+green[2]+clear[0]+clear[2];

	    for( int i = 1 ; i < 6 ; i++ )
	    {
			if( ary[i] < ary[mi] )
			{
				mi = i;
			}
		}
		cout << str[mi] << " " << ary[mi] << endl;
	}
	return 0;
}

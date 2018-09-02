#include<bits/stdc++.h>

using namespace std;

const string mm[25] = {
    "pop", "no", "zip", "zotz", "tzec",
    "xul", "yoxkin", "mol", "chen", "yax",
    "zac", "ceh", "mac", "kankin", "muan",
    "pax", "koyab", "cumhu", "uayet"
}; 
const string m[25] = {
    "imix", "ik", "akbal", "kan", "chicchan",
    "cimi", "manik", "lamat", "muluk", "ok",
    "chuen", "eb", "ben", "ix", "mem",
	"cib", "caban", "eznab", "canac", "ahau"
};
int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	int n;
	
	while(cin >> n)
	{
		cout << n << endl;
		while(n--)
		{
			string str;
			int d, y, k = 0, all = 0;
			scanf("%d. ", &d);
			cin >> str;
			scanf(" %d", &y);
			for(int i = 0;i < 20; i++)
			{
				if(mm[i] == str)
				{
					k = i;
					break;
				}
			}
			all = (365 * y) + (k * 20) + d;
			cout << (all%13)+1 <<" "<< m[all%20]  <<" "<< all/260 << endl;
		}
	}
	return 0;
}

/*
https://nanti.jisuanke.com/t/13
input
123
output
CXXIII
*/
#include<iostream>

using namespace std;

int main()
{
	int n;
	string loma[3005];
	loma[1] = "I";
	loma[2] = "II";
	loma[3] = "III";
	loma[4] = "IV";
	loma[5] = "V";
	loma[6] = "VI";
	loma[7] = "VII";
	loma[8] = "VIII";
	loma[9] = "IX";
	
	loma[10] = "X";
	loma[20] = "XX";
	loma[30] = "XXX";
	loma[40] = "XL";
	loma[50] = "L";
	loma[60] = "LX";
	loma[70] = "LXX";
	loma[80] = "LXXX";
	loma[90] = "XC";
	 
	loma[100] = "C";
	loma[200] = "CC";
	loma[300] = "CCC";
	loma[400] = "CD";
	loma[500] = "D";
	loma[600] = "DC";
	loma[700] = "DCC";
	loma[800] = "DCCC";
	loma[900] = "CM";
	
	loma[1000] = "M";
	loma[2000] = "MM";
	loma[3000] = "MMM";
	
	loma[0] = "";
	
	while(cin >> n)
	{
		int q, w, e, r;
		if(n >= 1000)
		{
			q = (n / 1000) * 1000;
			n -= q;
			cout << loma[q];
		}
		if(n >= 100)
		{
			w = (n / 100) * 100;
			n -= w;
			cout << loma[w];
		}
		if(n >= 10)
		{
			e = (n / 10) * 10;
			n -= e;
			cout << loma[e];	
		}
		r = n;
		cout << loma[r];
	}

	
	return 0;
} 

/*
https://uva.onlinejudge.org/external/129/12908.pdf
*/

#include<iostream>
#include<cstdio>
#include<fstream>

using namespace std;

int main()
{
	int ary[20000] = {0}, k = 1;
	//ofstream fout;
	//fout.open("Ans.txt");
	while (ary[k++] <= 100000000) 
	{
		ary[k] = ary[k - 1] + k;
	}
	int temp;
	while(cin >> temp)
	{
		if(temp == 0) break;
		int page = 0;
		while (ary[++page] < temp) continue;
		printf("%d %d\n", ary[page] - temp + 1, page);
		//fout << ary[page] - temp + 1 << " " << page << endl;
	}
	return 0;
}

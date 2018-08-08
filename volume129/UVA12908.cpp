/*
https://uva.onlinejudge.org/external/129/12908.pdf
input
1
2
3
4
5
6
9000
499977
49999775
0
output
2 2
1 2
3 3
2 3
1 3
4 4
45 134
523 1000
5225 10000
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

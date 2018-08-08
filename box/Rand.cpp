#include<iostream>
#include<fstream>
#include<ctime>
#include<cmath>
using namespace std;

int main(void)
{
	int n, k;
	clock_t t;
	ofstream fout;
	fout.open("text.txt");
	cin >> n;
	fout << n << endl;
	srand (time(NULL));
	t = clock();
	for(int i = 0; i < n; i++)
	{
		k = rand() % 100000 + 1;
		fout << k << endl;
	}
	t = clock() - t;
	printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
	return 0;
}

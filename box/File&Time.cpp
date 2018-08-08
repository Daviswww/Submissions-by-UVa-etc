#include <iostream>
#include<fstream>
#include<ctime>	

using namespace std;
int n;
int main()
{
	//input
	ifstream fin;
	fin.open("InputFile.txt");
	fin >> n;
	//output
	ofstream fout;
	fout.open("OutputFile.txt");
	fout << n;
	
	clock_t t;
	//Start
	t = clock();
	//end
	t = clock() - t;
	//time
	printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
    
	return 0;
}

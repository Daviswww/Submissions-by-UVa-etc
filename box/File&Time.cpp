#include <iostream>
#include<fstream>
#include<ctime>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	clock_t t;
	fin.open("InputFile.txt");
	fout.open("OutputFile.txt");
	
	int n;
	
	t = clock();		//Start
	fin >> n;
	fout << n;
	t = clock() - t;	//end
	
    printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
    
	return 0;
}

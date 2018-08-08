#include<iostream>
#include<fstream>
#include<ctime>
#include<cmath>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
	ifstream fin;
	ofstream fout;
	fout.open("SelectionSort.txt");
	fin.open("text.txt");
	clock_t t;
	int n;
	t = clock();
	fin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		fin >> arr[i];
	}
	t = clock();
	for(int i = 0; i < n; i++)
	{
		int k = arr[i], set = i;
		for(int j = i; j < n; j++)
		{
			if(k > arr[j])
			{
				k = arr[j], set = j;	//找出最大的 
			}
		}
		swap(&arr[i], &arr[set]);
	}
	cout << "SelectionSort: " << endl;
    for(int i = 0; i < n; i++)
    {
    	fout << arr[i] << endl;
	}
	t = clock() - t;
    printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
	return 0;
}

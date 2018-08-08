#include <iostream>
#include<fstream>
#include<ctime>
#include<cmath>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Partition(int *arr, int front, int end){
    int pivot = arr[end];
    int i = front -1;
    for (int j = front; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[i], &arr[end]);		//¤ñ¸û 
    return i;
}
void QuickSort(int *arr, int front, int end){
    if (front < end) {
        int pivot = Partition(arr, front, end);
        QuickSort(arr, front, pivot - 1);
        QuickSort(arr, pivot + 1, end);
    }
}
int main() {
	ifstream fin;
	ofstream fout;
	fout.open("QuickSort.txt");
	fin.open("text.txt");
    int n;
	clock_t t;
	t = clock();    
    fin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
    	fin >> arr[i];
	}
    QuickSort(arr, 0, n-1);
    cout << "QuickSort:" << endl;
    for(int i = 0; i < n; i++)
    {
    	fout << arr[i] << endl;
	}
    t = clock() - t;
    printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
    return 0;
}

#include<iostream>
using namespace std;
#define swap(x, y) {int z = x; x = y; y = z;}
const int N = 105;

int SelectionSort(int *a, int n){
    int count = 0;
    for(int i = 0; i < n; i++) {
        int mini = i;
        for(int j = mini; j < n; j++) {
            if (a[j] < a[mini]) {
                mini = j;
            }            
        }
        if(mini != i){
            count++;
            swap(a[i], a[mini]);
        }
        
        if(i){
            cout  << " " << a[i];
        }else{
            cout << a[i];
        }
    }
    cout << endl;
    return count;
}

int main()
{
    int a[N] = {0}, n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << SelectionSort(a, n) << endl;
    return 0;
}
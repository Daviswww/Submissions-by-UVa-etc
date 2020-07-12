#include<iostream>
using namespace std;
#define swap(x, y) {int z = x; x = y; y = z;}
const int N = 105;

int BubbleSort(int *a, int n){
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = n-1; j > i; j--) {
            if (a[j] < a[j-1]) {
                swap(a[j], a[j-1]);
                count++;
            }            
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
    cout << BubbleSort(a, n) << endl;
    return 0;
}


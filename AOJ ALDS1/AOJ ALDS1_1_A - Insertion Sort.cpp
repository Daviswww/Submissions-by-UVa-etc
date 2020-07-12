#include<iostream>
#define swap(a, b) {int c = a; a = b; b = c;}
using namespace std;
const int N = 105;
void print(int *a, int n){
    for(int i = 0; i < n; i++){
        if(i){
            cout << " " <<a[i];
        }else{
            cout << a[i];
        }
    }
    puts("");
}
void InsertionSort(int *a, int n){
    int key, j;
    for(int i = 1; i < n; i++){
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        print(a, n);
    }
    return;
}
int main()
{
    int n, a[N] = {0};

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    print(a, n);
    InsertionSort(a, n);


    return 0;
}
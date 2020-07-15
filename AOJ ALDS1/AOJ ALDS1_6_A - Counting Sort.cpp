#include<iostream>

using namespace std;
const int N = 2000005;
const int K = 10005;
int a[N] = {0};

void CountingSort(int *a, int n){
    int c[K] = {0};       
    bool ok = false;

    for(int i = 0; i < n; i++){
        c[a[i]]++;
    }
    
    for(int i = 0; i < K; i++){
        for(int j = 0; j < c[i]; j++){
            if(ok){
                cout << " " << i;
            }else{
                cout << i;
                ok = true;
            }
        }
    }
    cout << endl;
}

int main()
{
    int n;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    CountingSort(a, n);
    return 0;
}
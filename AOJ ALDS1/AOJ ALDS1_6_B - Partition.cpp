#include<iostream>
#define swap(x, y) {int z = x; x = y; y = z;}
using namespace std;
const int N = 100005;
int Partition(int *a, int p, int r){
    int x = a[r];
    int i = p-1;
    for(int j = p; j < r; j++){
        if(a[j] <= x){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);

    return i+1;
}

int main()
{
    int n, a[N] = {0};

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int point = Partition(a, 0, n-1);

    for(int i = 0; i < n; i++){
        if(i == point){
            cout << " [" << a[i] << "]";
        }else{
            if(i){
                cout << " " << a[i];
            }else{
                cout << a[i];
            }
        }
    }
    cout << endl;
    return 0;
}
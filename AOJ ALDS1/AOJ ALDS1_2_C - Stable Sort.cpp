#include<iostream>
using namespace std;
#define swap(x, y) {StableSort z = x; x = y; y = z;}

const int N = 105;

struct StableSort
{
    char suit;
    int value;
    int index;
};

void SelectionSort(StableSort *a, int n){
    for(int i = 0; i < n; i++) {
        int mini = i;
        for(int j = mini; j < n; j++) {
            if (a[j].value < a[mini].value) {
                mini = j;
            }            
        }
        if(mini != i){
            swap(a[i], a[mini]);
        }
        
        if(i){
            cout  << " " << a[i].suit << a[i].value;
        }else{
            cout << a[i].suit << a[i].value;
        }
    }
    cout << endl;
}

void BubbleSort(StableSort *a, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = n-1; j > i; j--) {
            if (a[j].value < a[j-1].value) {
                swap(a[j], a[j-1]);
            }            
        }
        if(i){
            cout  << " " << a[i].suit << a[i].value;
        }else{
            cout << a[i].suit << a[i].value;
        }
    }
    cout << endl;
}

string check(StableSort *a, int n){
    bool ok = true;
    for(int i = 1; i < n; i++){
        if(a[i].index < a[i-1].index && a[i].value == a[i-1].value){
            ok = false;
        }
    }
    return ok ? "Stable" : "Not stable";
}

int main()
{
    StableSort a[N] = {0}, b[N] = {0};
    string str;
    int n;
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str;
        a[i].suit = str[0];
        a[i].value = str[1]-'0';
        a[i].index = i;
        b[i].suit = str[0];
        b[i].value = str[1]-'0';
        b[i].index = i;
    }
    BubbleSort(a, n);
    cout << check(a, n) << endl;
    SelectionSort(b, n);
    cout << check(b, n) << endl;
    return 0;
}

/*
5
H4 C9 S4 D2 C3
*/
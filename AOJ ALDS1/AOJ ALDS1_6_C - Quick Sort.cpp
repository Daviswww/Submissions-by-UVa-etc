    #include<iostream>
    #define swap(x, y) {Node z = x; x = y; y = z;}
    using namespace std;
    const int N = 100005;

    struct Node {
        char suit;
        int number;
        int index;
    };

    int Partition(Node *a, int p, int r){
        int x = a[r].number;
        int i = p-1;
        for(int j = p; j < r; j++){
            if(a[j].number <= x){
                i++;
                swap(a[i], a[j]);
            }
        }
        swap(a[i+1], a[r]);

        return i+1;
    }
    void Quicksort(Node *a, int p, int r){
        if(p < r){
            int q = Partition(a, p, r);
            Quicksort(a, p, q-1);
            Quicksort(a, q+1, r);
        }
    }
    int main()
    {
        int n;
        bool ok = true;
        Node a[N] = {0};

        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> a[i].suit >> a[i].number;
            a[i].index = i;
        }

        Quicksort(a, 0, n-1);
        for(int i = 0; i < n-1; i++){
            if(a[i].index > a[i+1].index && a[i].number==a[i+1].number){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "Stable" << endl;
        }else{
            cout << "Not stable" << endl;
        }
        for(int i = 0; i < n; i++){
            cout << a[i].suit << " " << a[i].number << endl;
        }
        
        return 0;
    }
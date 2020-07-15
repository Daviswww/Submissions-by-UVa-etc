#include<iostream>
#include<map>

using namespace std;

int main()
{
    string str, s;
    map<string,int> m;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str >> s;
        if(str == "insert"){
            m[s] = 1;
        }else{
            if(m[s]){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }
    }

    return 0;
}
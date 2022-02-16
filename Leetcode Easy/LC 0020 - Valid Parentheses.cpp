#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int a[1000];
        a['('] = 1;
        a[')'] = 2;
        a['['] = 3;
        a[']'] = 4;
        a['{'] = 5;
        a['}'] = 6;
        stack<char> sk;
        sk.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(sk.empty()){
                sk.push(s[i]);
            } else if(a[s[i]] - a[sk.top()] == 1){
                sk.pop();
            } else{
                sk.push(s[i]);
            }
        }
        if(sk.size() > 0) {
            return false;
        }else{
            return true;
        }
    }
};
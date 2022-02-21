#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        vector<string> k;
        string p = "";
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == ' '){
                k.push_back(p);
                p = "";
            }else{
                p += s[i];
            }
        }
        k.push_back(p);
        p = "";
        for(int i = k.size()-1; i >= 0; i--){
            p += k[i];
            if(i){
                p += ' ';
            }
        }
        return p;
    }
};
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "", str = "", s;
        bool ok = false;
        for(int i = 0; i < strs[0].size(); i++){
            str += strs[0][i];
            for(int j = 0; j < strs.size(); j++){
                if(strs[j].find(str) == string::npos || strs[j].find(str) != 0){
                    ok = false;
                    break;
                }
                ok = true;
            }
            if(ok){
                ans = str;
            }else{
                break;
            }
        }
        
        return ans;
    }
};
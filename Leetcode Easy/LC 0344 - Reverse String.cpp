#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> k;
        while(!s.empty()){
            k.push_back(s.back());
            s.pop_back();
        }
        s = k;
    }
};
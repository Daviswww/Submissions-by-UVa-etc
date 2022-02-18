#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(), p;
        vector<int> a;
        p = n-(k%n);
        for(int i = 0; i < n; i++){
            a.push_back(nums[(p+i)%n]);
        }
        nums = a;
    }
};
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int curr = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            curr += nums[i];
            if (nums[i] > curr)
                curr = nums[i];
            if (res < curr)
                res = curr;
        }
        return res; 
    }
};
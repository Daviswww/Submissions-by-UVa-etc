#include <iostream>
#include <math.h>
#include <vector>

using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, m = 0;
        
        while(l <= r){
            m = floor((l + r) / 2);
            if(nums[m] < target ){
                l = m + 1;
            }else if(nums[m] > target){
                r = m - 1;
            }else {
                return m;
            }
        }
        if(target > nums[m]){
            return m + 1;
        }
        return m;
    }
};
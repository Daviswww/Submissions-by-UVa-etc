#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a = {0, 0};
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if((nums[i] + nums[j]) == target){
                    a[0] = i;
                    a[1] = j;
                }
            }
        }
        return a;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, sum;
        vector<int> ans = {0, 0};
        while(l != r){
            sum = nums[l] + nums[r];
            if(sum > target){
                --r;
            }else if(sum < target) {
                ++l;
            }else{
                return {l, r};
            }
        }
        return {0, 0};
    }
};
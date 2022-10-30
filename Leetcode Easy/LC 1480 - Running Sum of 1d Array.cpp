class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> a;
        a.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            a.push_back(nums[i] + a[i-1]);          
        }
        return a;
    }
};
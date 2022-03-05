class Solution {
public:
    int singleNumber(vector<int>& nums) {
        const int n = nums.size();
        vector<int> a(30000, 0);
        vector<int> b(30000, 0);
        int ans;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                ++a[nums[i]];
            }else{
                ++b[nums[i] * -1];
                 cout << b[nums[i] * -1] << endl;
            }
        }
        for(int i = 0; i < 30001; i++){
            if(a[i]==1){
                ans = i;
                break;
            }else if(b[i]==1){
                ans = i * -1;
                break;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        const int n = digits.size();
        reverse(digits.begin(), digits.end());
        vector<int> a = digits;
        ++a[0];
        for(int i = 0; i < n; i++){
            if(a[i] / 10){
                if(i == n-1){
                    a.push_back(a[i]/10);
                }else{
                    a[i+1] += a[i] / 10;
                }
                a[i] %= 10;
            }
        }
        reverse(a.begin(), a.end());
        return a;
    }
};
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 0)
            return 0;

        int n = nums.size();

        int ans = 0, prod = 1;
        int j = 0;
        for(int i = 0; i < n; i++){
            prod *= nums[i];
            // cout<<prod<<endl;
            while(j<=i && prod >= k){
                prod = prod / nums[j];
                j++;
            }
            ans += i - j + 1;
        }

        return ans;
        
    }
};
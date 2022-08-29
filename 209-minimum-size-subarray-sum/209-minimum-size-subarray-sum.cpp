class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int ans = INT_MAX;
        
        int sum = accumulate(nums.begin(), nums.end(), 0);
        
        if(target>sum)
            return 0;
        
       
        int l = 0, r = 0, s= 0;
        
        while(r<n){
            s += nums[r++];
            while(s >= target){
                ans = min(ans, r-l);
                s -= nums[l++];
            }
        }
        
        
        return ans == INT_MAX ? 1 : ans;
        
        
    }
};
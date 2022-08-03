class Solution {
public:
    
    int f(int i, vector<int> &nums, vector<int> &dp){
        if(i >= nums.size()-1)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        int ans = nums.size() + 1;
        
        for(int j = i + 1; j<= i + nums[i]; j++)
        {
            ans = min (ans,  1 + f(j, nums, dp) );
        }        
        
        return dp[i] = ans;
    }
    
    
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> dp(n, -1);
        
        return f(0,nums, dp);
        
//         int currReach = 0, jumps = 0, maxReach = 0;
        
//         for(int i=0;i<nums.size()-1;i++){
            
//             if(i + nums[i] > maxReach){
//                 maxReach = i + nums[i];
//             }
         
            
//             if(i==currReach) {
//             jumps++;
//             currReach = maxReach;
//             }
//             cout<<currReach<<" ";
            
//         }
        
//         return jumps;
        
    }
};
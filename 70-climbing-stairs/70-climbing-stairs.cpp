class Solution {
public:
    
    int util(int n, vector<int> &dp){
        if(n == 0)
            return 1;
        if(n==1)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        
        return dp[n] = util(n-1, dp) + util(n-2, dp);
    }
    
    
    int climbStairs(int n) {
        
        vector<int>dp(n+1, -1);
        dp[0] = 1;
        dp[1] = 1;
        //dp[2] = 2;
        return util(n,dp);
    }
};
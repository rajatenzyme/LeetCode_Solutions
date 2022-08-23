class Solution {
public:
    int solve(vector<int>& coins, int n, int target,vector<vector<int>> &dp){
        
        if(n == 0 && target!=0)
            return 1e9;
        else if(n==0 || target == 0)
            return 0;
        
        if(dp[n][target]!=-1)
            return dp[n][target];
        
        if(coins[n-1]<=target)
            return dp[n][target] = min(1+solve(coins,n,target - coins[n-1],dp), solve(coins,n-1,target,dp));
        else
            return dp[n][target] =solve(coins,n-1,target,dp);
        
        
    }
    
    
    
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        
        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
        
        return solve(coins,n,amount,dp) >= 1e9 ? -1 : solve(coins,n,amount,dp);
        
    }
};
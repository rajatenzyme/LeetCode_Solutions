class Solution {
public:
    int solve(int i, int j, vector<vector<int>> a, vector<vector<int>> &dp){

        int n = a.size();

        if(i == n-1)
             return a[n-1][j]; //Only Target is to reach nth row

        if(dp[i][j]!=-1)
            return dp[i][j];

        // boundaries will never be crossed
        // i+1,j & i+1, j+1  will always exist

        int down = a[i][j] + solve(i+1,j,a,dp);
        int diag = a[i][j] + solve(i+1, j+1,a,dp);

        return dp[i][j] =  min(down, diag);
    
    }

    
    int minimumTotal(vector<vector<int>>& triangle) {
         int n = triangle.size();
        // vector<vector<int>> dp(n, vector<int> (n, -1));
        
         vector<vector<int>> dp(n, vector<int> (n, 0));
    
    for(int j = 0; j<n; j++)
        dp[n-1][j] = triangle[n-1][j];
    
    for(int i=n-2;i>=0;i--){
        for(int j=i; j>=0; j--){
            int down = triangle[i][j] + dp[i+1][j];
            int diag = triangle[i][j] + dp[i+1][j+1];
            dp[i][j] = min(diag, down);
        }
    }
    
    return dp[0][0];
        
        
        
        // return solve(0,0,triangle, dp);
        
        
        
    }
};
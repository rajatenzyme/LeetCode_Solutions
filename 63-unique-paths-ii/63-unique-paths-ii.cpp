class Solution {
public:
    
    int solve(int m, int n, vector<vector<int>> &dp, vector<vector<int>> &mat ){
    
        if(m>=0 && n>=0 && mat[m][n] == 1)
            return 0;

        if(m == 0 && n == 0)
            return 1;
        if(m < 0 || n < 0)
            return 0;

        if(dp[m][n]!=-1)
            return dp[m][n];

        return dp[m][n] = solve(m-1,n,dp,mat) +solve(m,n-1,dp,mat);
}

    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        if(obstacleGrid[m-1][n-1] == 1)
            return 0;
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        return solve(m-1,n-1,dp,obstacleGrid);
    }
};
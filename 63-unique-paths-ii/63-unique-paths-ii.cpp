class Solution {
public:
    
//     int solve(int m, int n, vector<vector<int>> &dp, vector<vector<int>> &mat ){
    
//         if(m>=0 && n>=0 && mat[m][n] == 1)
//             return 0;

//         if(m == 0 && n == 0)
//             return 1;
//         if(m < 0 || n < 0)
//             return 0;

//         if(dp[m][n]!=-1)
//             return dp[m][n];

//         return dp[m][n] = solve(m-1,n,dp,mat) +solve(m,n-1,dp,mat);
// }

    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
//         if(obstacleGrid[m-1][n-1] == 1)
//             return 0;
        
//         vector<vector<int>> dp(m,vector<int>(n,-1));
        
//         return solve(m-1,n-1,dp,obstacleGrid);
        
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j] == 1)
                    dp[i][j] = 0;
                else if(i == 0 && j==0)
                    dp[i][j] = 1;
                else{
                    int left = i-1>=0 ? dp[i-1][j]:0;
                    int right = j-1>=0 ? dp[i][j-1]:0;
                    dp[i][j] = left + right;
                }
                //dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    
    }
};
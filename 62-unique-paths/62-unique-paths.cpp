class Solution {
public:
    
//     int dfs(int i, int j, int m, int n){
        
//         if(i>m-1 || j>n-1)
//             return 0;
        
//         if(i == m-1 && j == n-1)
//             return 1;
        
//         return 
//         dfs(i+1, j, m, n) +
//         dfs(i, j+1, m, n);
//     }
    
    
    
//     int uniquePaths(int m, int n) {
        
    
//         return dfs(0,0,m,n);
        
        
//     }
    
//     int dfs(int i, int j ,int m, int n, vector<vector<int>> &dp){
        
//         if(i>m-1 || j>n-1)
//             return 0;
        
//         if(dp[i][j]!=-1)
//             return dp[i][j];
        
        
//         if(i == m-1 && j == n-1)
//             return 1;
        
        
        
//         return dp[i][j] = dfs(i+1, j, m, n,dp) + dfs(i, j+1, m, n,dp);
//     }    
    
//      int uniquePaths(int m, int n) {
        
//          vector<vector<int> > dp( m , vector<int> (n,-1));
         
//          return dfs(0,0,m,n,dp);
//      }
         
    
     int uniquePaths(int m, int n) {
        
         vector<vector<int> > dp( m , vector<int> (n));
         
          for(int i=0;i<m;i++){
             for(int j=0;j<n;j++){
                       if(i==0 || j == 0)
                            dp[i][j] = 1; // For these cells it has 1 way to reach
                        else
                            dp[i][j] = dp[i][j] = dp[i-1][j] + dp[i][j-1]; 
                 
             }
         }
         
         
         return dp[m-1][n-1];
        
     }
    
         

        
};
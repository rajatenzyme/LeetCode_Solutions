class Solution {
public:
    
    int f(int i, int j, int n, int m, vector<vector<int>> a, vector<vector<int>> &dp){
     
        if(j<0 || j >= m)
            return -1e8;

        if(i == 0)
            return a[0][j];

        if(dp[i][j]!=-1)
            return dp[i][j];

        int s = a[i][j] + f(i-1,j,n,m,a,dp);
        int rd = a[i][j] + f(i-1, j+1,n,m,a,dp);
        int ld = a[i][j] + f(i-1,j-1,n,m,a,dp);

        return dp[i][j] = max(s,max(ld,rd));
    
    }

    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m,0));

        for(int i=0;i<m;i++){
            dp[0][i] = matrix[0][i];
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int s = matrix[i][j] + dp[i-1][j];
                int rd = j+1<m ? matrix[i][j] + dp[i-1][j+1] : 1e8;
                int ld = j-1>=0 ? matrix[i][j] + dp[i-1][j-1] : 1e8;
                dp[i][j] = min(s,min(rd,ld));
            }
        }

    //     for(int i=0;i<dp.size();i++){
    //         for(int j=0;j<dp[0].size();j++){
    //               cout<<dp[i][j]<< " ";
    //         }
    //         cout<<endl;
    //     }

        int ans = 1e8;

        for(int i=0;i<m;i++){
            ans = min(ans, dp[n-1][i]);
        }

        return ans;


    //     vector<vector<int>> dp(n, vector<int>(m,-1));

    //     int ans = -1e8;

    //     for(int i=1;i<=m;i++){
    //         ans = max(ans, f(n-1,i-1,n,m,matrix,dp));
    //     }

    //     return ans;
    }
};
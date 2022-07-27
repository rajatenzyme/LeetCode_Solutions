class Solution {
public:
    
    void dfs(int i, int j, int n, int m, vector<vector<char>> &grid){
        
        if(i>=n || j>=m || i<0 || j<0 || grid[i][j] == '0' || grid[i][j] == '2')
            return;
        
        grid[i][j] = 2;
        
        if(i+1<n && grid[i+1][j] == '1')
            dfs(i+1,j, n, m, grid);
        if(j+1<m && grid[i][j+1] == '1')
            dfs(i,j+1, n, m, grid);
        if(i-1>=0 && grid[i-1][j] == '1')
            dfs(i-1,j, n, m, grid);
        if(j-1>=0 && grid[i][j-1] == '1')
            dfs(i,j-1, n, m, grid);
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '1'){
                    dfs(i,j,n,m,grid);
                    ans++;
                }            
            }
        }
        
        return ans;
    }
};
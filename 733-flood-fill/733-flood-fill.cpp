class Solution {
public:
    void dfs(int i, int j, int n, int m, int initialColor, int color, vector<vector<int>> &image){
        
        if(i>=n || j>=m || i<0 || j<0 || image[i][j] != initialColor)
            return;
        
        image[i][j] = color;
        
        dfs(i+1, j, n,m,initialColor, color, image);
        dfs(i, j+1, n,m,initialColor, color, image);
        dfs(i-1, j, n,m,initialColor, color, image);
        dfs(i, j-1, n,m,initialColor, color, image);
        
    }
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        
        int initialColor = image[sr][sc];
        
        
        if(initialColor != color){
            dfs(sr, sc, n, m, initialColor, color, image);
        }
        
        return image;
        
    }
};
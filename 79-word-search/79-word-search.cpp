class Solution {
public:
    //int k = 0;
    
    bool dfs(int i, int j, int n, int m,vector<vector<char>>& board,vector<vector<int>> &vis, string word, string my_str){
        
        if(word == my_str)
            return true;
        
        if(i>=n || j>=m || i<0 || j<0 || vis[i][j]!=0 || board[i][j] != word[my_str.size()])
            return false;
        
        vis[i][j] = 1;
        
        my_str+= board[i][j];
        
        
        bool ans = dfs(i+1,j,n,m,board,vis,word,my_str) ||
        dfs(i,j+1,n,m,board,vis,word,my_str) ||
        dfs(i-1,j,n,m,board,vis,word,my_str) ||
        dfs(i,j-1,n,m,board,vis,word,my_str);
        
        my_str.pop_back();
        vis[i][j] = 0;
        
        return ans;
        
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        string my_str = "";
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(board[i][j] == word[0] &&  vis[i][j] == 0){
                    if(dfs(i,j,n,m,board,vis,word,my_str))
                        return true;
                } 
            }
        }
        
        return false;
        
    }
};
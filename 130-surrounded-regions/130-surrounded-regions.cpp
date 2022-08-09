class Solution {
public:
    void dfs(int i, int j, int n, int m,vector<vector<char>>& board ){
        
        if(i<0 || j<0 || i>=m || j>=n || board[i][j] != 'O')
            return;
        
        board[i][j] = '#';
        
        dfs(i+1,j,n,m,board);
        dfs(i,j+1,n,m,board);
        dfs(i-1, j,n,m,board);
        dfs(i,j-1,n,m,board);
        
    
    }
    
    
    
    
    
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        if(m == 0)
            return;
        
        for(int i=0;i<m;i++){
            if(board[i][0] == 'O')
             dfs(i, 0, n, m, board);
         if(board[i][n-1] == 'O')
             dfs(i, n-1, n, m, board);
            //first row
            // if(board[0][i] == 'O')
            //     dfs(0,i,n,m,board);
            // //first col
            // if(board[i][0] == 'O')
            //     dfs(i,0,n,m,board);
            
        }
        
        for(int i=0;i<n;i++){
            if(board[0][i] == 'O')
             dfs(0, i, n, m, board);
         if(board[m-1][i] == 'O')
             dfs(m-1, i, n, m, board);
            //last row
//             if(board[n-1][i] == 'O')
//                 dfs(n-1,i,n,m,board);
            
//             //last col
//             if(board[i][n-1] == 'O')
//                 dfs(i,n-1,n,m,board);
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                if(board[i][j] == '#')
                    board[i][j] = 'O';
                
            } 
        }
        
    }
};
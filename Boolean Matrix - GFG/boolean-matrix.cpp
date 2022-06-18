// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &m)
    {
        int rows = m.size();
        int cols = m[0].size();
        
        vector<pair<int, int>> ones;
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(m[i][j] == 1)
                    ones.push_back({i,j});
            }
        }
        
        if(ones.size() == rows * cols)
            return;
        
        for(auto it : ones){
            for(int i=0;i<rows;i++){
                m[i][it.second] = 1;
            }
            
            for(int i=0;i<cols;i++){
                m[it.first][i] = 1;
            }
        }
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}


  // } Driver Code Ends
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    void dfs(int row, int col, vector<vector<int>> &m, int n, string s, vector<string> &ans){
        
        if(row<0 || row>=n || col<0 || col>=n || m[row][col] == 0) return;
        
        if(row == n-1 && col == n-1){
            ans.push_back(s);
            return;
        }
        
        m[row][col] = 0;
        
        dfs(row-1, col, m, n, s+"U", ans);
        dfs(row+1, col, m, n, s+"D", ans);
        dfs(row,col+1,m,n,s+"R",ans);
        dfs(row,col-1,m,n,s+"L",ans);
        
        m[row][col] = 1;
        return;
        
    }
    
    
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        vector<string> ans;
        
        string s = "";
        
        dfs(0,0,m,n,s,ans);
        
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
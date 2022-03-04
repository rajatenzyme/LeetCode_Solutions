class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        
        vector<int> rows(n,1);
        vector<int> cols(m,1);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(a[i][j] == 0){
                    rows[i] = 0;
                    cols[j] = 0;
                }
                
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rows[i] == 0 || cols[j] == 0){
                    a[i][j] = 0;
                }
            }
        }
        
        
    }
};
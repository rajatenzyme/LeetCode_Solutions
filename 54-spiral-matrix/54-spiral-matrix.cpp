class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
        int m = matrix.size();
        int n = matrix[0].size();
        
        int top = 0, down = m-1, left = 0, right = n-1;
        
        vector<int> ans;
        
        int dir = 0;
        
        while(top<=down && left<=right){
            
            if(dir == 0){
                
                for(int i=left; i<=right; i++){
                    ans.push_back(matrix[top][i]);
                }
                //ans.push_back(temp);
                top++;
            }
            
            else if(dir == 1){
                //vector<int> temp;
                for(int i=top; i<=down; i++){
                    ans.push_back(matrix[i][right]);
                }
                //ans.push_back(temp);
                right--;
            }
            
            else if(dir == 2){
                //vector<int> temp;
                for(int i=right; i>=left; i--){
                    ans.push_back(matrix[down][i]);
                }
                //ans.push_back(temp);
                down--;
            }
            
            else if(dir == 3){
                //vector<int> temp;
                for(int i=down; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                //ans.push_back(temp);
                left++;
            }
            dir = (dir + 1)%4;
            
        }
        
        return ans;
        
        
    }
};
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> ans(n, vector<int>(n));
        
        int top = 0, left = 0, right = n-1, down = n-1;
        
        int dir = 0;
        int k = 0;
        
        
        while(top<=down && left<=right){
            
            if(dir == 0){
                //vector<int> temp;
                for(int i = left; i<=right; i++){
                    k++;
                    ans[top][i] = k;
                    //ans.push_back(matrix[top][i]);
                    //temp.push_back(k);
                }
                //ans.push_back(temp);
                top++;
            }
            
            else  if(dir == 1){
                //vector<int> temp;
                for(int i = top; i<=down; i++){
                    k++;
                    ans[i][right] = k;
                    //temp.push_back(k);
                }
                //ans.push_back(temp);
                right--;
            }
            
            else  if(dir == 2){
                //vector<int> temp;
                for(int i = right; i>=left; i--){
                    k++;
                    ans[down][i] = k;
                    //temp.push_back(k);
                }
                //ans.push_back(temp);
                down--;
            }
            
            else  if(dir == 3){
                //vector<int> temp;
                for(int i = down; i>=top; i--){
                    k++;
                    ans[i][left] = k;
                    //temp.push_back(k);
                }
                //ans.push_back(temp);
                left++;
            }
            
            dir = (dir+1)%4;
            
            
        }
        
        return ans;
        
        
    }
};
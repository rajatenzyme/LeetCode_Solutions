class Solution {
public:
    
    void dfs(vector<int> &v, int t, int curr, vector<vector<int>> &ans,vector<int> &temp)
    {
        if(curr == v.size()){
            if(t == 0)
                ans.push_back(temp);
            return;
        }
        
        if(v[curr] <= t){
            //while taking this element
            temp.push_back(v[curr]);
            dfs(v,t-v[curr], curr, ans, temp);
            temp.pop_back();
        }
        
        //Not taking
        dfs(v,t,curr+1, ans,temp);
        
        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& v, int t) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        
        dfs(v,t, 0, ans,temp);
        
        return ans;
        
        
        
    }
};
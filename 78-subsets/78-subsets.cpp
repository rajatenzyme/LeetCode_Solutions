class Solution {
public:
    
    void dfs(int curr ,vector<int> subset, vector<vector<int>> &res, vector<int>& nums){
        
        
        if(curr >= nums.size()){
            res.push_back(subset);
            return;
        }
        
        //include current element
        subset.push_back(nums[curr]);
        dfs(curr+1,subset, res, nums );
        
        //Not include current
        subset.pop_back();
        dfs(curr+1,subset, res, nums);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<vector<int>> res;
        vector<int> subset;
        
        dfs(0, subset, res, nums);
        
        return res;
    }
};
class Solution {
public:
    
    void allSubsets(int idx, vector<int> nums, vector<int> &ds, vector<vector<int>> &ans){
        
        ans.push_back(ds);
        for(int i = idx ; i<nums.size() ; i++){
            if(i!=idx && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            allSubsets(i+1, nums, ds, ans);
            ds.pop_back();
        }
        
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        vector<int> ds;
        
        allSubsets(0, nums, ds, ans);
        
        return ans;
        
        
    }
};
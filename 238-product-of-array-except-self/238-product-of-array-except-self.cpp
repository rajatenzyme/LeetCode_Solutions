int mulRem(vector<int> nums, int k){
    int mul = 1;
    for(int i=0;i<nums.size();i++){
        if(i == k)
            continue;
        else
            mul*=nums[i];
    }
    
    return mul;
}



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans;
        int mulAll = 1;
        for(int i=0;i<nums.size();i++)
            mulAll*=nums[i];
        
        // cout<<mulAll;
        // return ans;
        
        if(mulAll == 0){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0)
                ans.push_back(0);
                else
                    ans.push_back(mulRem(nums,i));
            }
            return ans;
        }
        
        for(int i=0;i<nums.size();i++){
            ans.push_back(mulAll/nums[i]);
        }
        
        return ans;
    }
};
class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int isReachable = 0;
        
        for(int i=0;i<nums.size();i++){
            if(isReachable < i)
                return false;
            
            isReachable = max(isReachable, i + nums[i]);
        }
        
        return true;
    }
};
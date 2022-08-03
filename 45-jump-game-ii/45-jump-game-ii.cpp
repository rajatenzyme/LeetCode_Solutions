class Solution {
public:
    int jump(vector<int>& nums) {
        
        int currReach = 0, jumps = 0, maxReach = 0;
        
        for(int i=0;i<nums.size()-1;i++){
            
            if(i + nums[i] > maxReach){
                maxReach = i + nums[i];
            }
         
            
            if(i==currReach) {
            jumps++;
            currReach = maxReach;
            }
            
        }
        
        return jumps;
        
    }
};
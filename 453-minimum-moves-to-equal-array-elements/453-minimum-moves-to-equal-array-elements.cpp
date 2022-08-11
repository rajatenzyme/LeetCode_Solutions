class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        
        int ans = 0;
        if(nums.size() < 2)
            return ans;
        sort(nums.begin(), nums.end());
        int low = 0, high = nums.size() - 1;
        
        while(nums[high] != nums[0]){
            int curr = nums[high] - nums[0];
            ans+= curr;
            nums[0] += curr;
            high--;
            nums[high] += ans; 
        }
        
        return ans;
     
        
    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int idx = 0;
        
        int high = nums.size();
        
        while(idx<high){
            if(nums[idx] == val){
                nums[idx] = nums[high-1];
                high--;
            }
            else
                idx++;
        }
        
        return idx;
        
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        //Move all 0 to end
//         int j = 0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=0)
//                 nums[j++] = nums[i];
//         }
        
//         while(j<nums.size())
//             nums[j++] = 0;
        
        
        
        
//         int high = nums.size();
        
        int k = 0;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i] != 0){
                swap(nums[k], nums[i]);
                k++;
            }
        }
                
            
//         }
        
//         return;
        
        
    }
};
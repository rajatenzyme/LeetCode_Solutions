class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int j = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                nums[j++] = nums[i];
        }
        
        while(j<nums.size())
            nums[j++] = 0;
        
        
//         int high = nums.size();
        
//         int zero = 0, nonZero = 0;
        
//         while(zero<nums.size() && nonZero<nums.size()){
            
//             while(nums[nonZero] == 0)
//                 nonZero++;
            
//             if(nums[zero]==0){
//                 swap(nums[zero], nums[nonZero]);
//                 zero++;
//             }
            
                
            
//         }
        
//         return;
        
        
    }
};
class Solution {
public:
    int lastOcc(vector<int>& nums, int target){
        int second = -1;
        
        if(nums.size() == 0)
            return second;
        
        int low = 0;
        int high = nums.size() - 1;
        
        
        while(low<=high){
            
            int mid = low + (high-low)/2; 
            
            if(target == nums[mid]){
                second = mid;
                low = mid + 1;
            }
            
            else if(target < nums[mid]){
                high = mid - 1;
            }
            
            else{
                low = mid + 1;
            }
        }
        
        return second;
    }
    
    int firstOcc(vector<int>& nums, int target){
        int first = -1;
        
        if(nums.size() == 0)
            return first;
        
        int low = 0;
        int high = nums.size() - 1;
        
        
        while(low<=high){
            
            int mid = low + (high-low)/2; 
            
            if(target == nums[mid]){
                first = mid;
                high = mid - 1;
            }
            
            else if(target < nums[mid]){
                high = mid - 1;
            }
            
            else{
                low = mid + 1;
            }
        }
        
        return first;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        if(nums.size() == 0)
            return  {-1, -1};   
        
        if(nums.size() == 1){
            if(nums[0] == target)
                return {0, 0};
            else
                return {-1,-1};
        }
            
        
        int first = -1;
        int second = -1;
        
        first = firstOcc(nums,target);
        second = lastOcc(nums, target);
        
        return {first, second};
    }
};
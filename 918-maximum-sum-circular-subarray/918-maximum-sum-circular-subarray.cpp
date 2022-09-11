class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        
         int num = arr.size();
         int mx = arr[0], curr_mx = arr[0], mn = arr[0], curr_min = arr[0], total_sum  = arr[0];
        
        for(int i=1;i<num;i++){
            total_sum += arr[i];
            //max subarray sum
            curr_mx = max(curr_mx+arr[i], arr[i]);
            mx = max(mx, curr_mx);
            
            //min subarray sum
            curr_min = min(curr_min+arr[i], arr[i]);
            mn = min(mn, curr_min);
            
            
        }
        
        if(mn == total_sum)
            return mx;
        
        return max(mx, total_sum - mn);
    }
};
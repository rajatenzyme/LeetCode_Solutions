class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char k) {
        int n = a.size();
        
        int low = 0, high = n - 1;
        
        char ans;
        
        while(low <= high){
            
            if(a[n-1]<=k)
                return a[0];
            
            int mid = low + (high - low) / 2;
            
            if(a[mid] == k){
                low = mid + 1;
            }
            else if(a[mid] < k)
                low = mid + 1;
            else
            {
                ans = a[mid];
                high = mid - 1;
            }
                
            
        }
        return ans;
        
    }
};
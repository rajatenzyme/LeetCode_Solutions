class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        
      
        
        sort(nums.begin(), nums.end());
        vector<int> v;
        v.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1])
                v.push_back(nums[i]);
        }
        
        for(auto x : v)
            cout<<x<<" ";
        
        int maxi = INT_MIN;
        int c = 1;
        
        for(int i=1;i<v.size();i++){
            if(v[i]- v[i-1] == 1)
                c++;
            else
                c = 1;
            
            maxi = max(maxi, c);
        }
        
        if(maxi == INT_MIN)
            return 1;
        
        return maxi;
        
        
    }
};
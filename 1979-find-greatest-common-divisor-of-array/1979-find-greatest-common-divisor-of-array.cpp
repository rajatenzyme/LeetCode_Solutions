class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int ans;
        
//         for(int i=0;i<n;i++){
//             ans = max
//         }
        
        int mini= *min_element(nums.begin(), nums.end());
        int maxi= *max_element(nums.begin(), nums.end());
        
        return __gcd(mini, maxi);
        
    }
};
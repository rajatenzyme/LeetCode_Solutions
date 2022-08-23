class Solution {
public:
    int lcs(vector<int>nums, vector<int> nums2, int n, int m, vector<vector<int>> &dp){
        
        if(n == 0 || m == 0){
                return 0;
        }
        
        if(dp[n][m]!=-1)
            return dp[n][m];
        
        if(nums[n-1] == nums2[m-1])
            return dp[n][m] = 1 + lcs(nums, nums2, n-1, m-1,dp);
        else
            return dp[n][m] = max(lcs(nums, nums2, n-1,m,dp), lcs(nums, nums2,n,m-1,dp));
        
    }
    
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>nums2(nums.begin(), nums.end());
        sort(nums2.begin(), nums2.end());
        nums2.erase(unique( nums2.begin(), nums2.end() ), nums2.end() );
        
        //vector<vector<int>> dp(nums.size()+1, vector<int>(nums2.size()+1,0));
        
        int dp[nums.size() + 1][nums2.size()+1];
        
        
        for(int i=0;i<nums.size()+1;i++){
            for(int j=0;j<nums2.size()+1;j++){
                if(i==0 || j == 0)
                    dp[i][j] = 0;
            }
        }
        
        for(int i=1;i<nums.size()+1;i++){
            for(int j=1;j<nums2.size()+1;j++){
                if(nums[i-1] == nums2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[nums.size()][nums2.size()];
        
        
       // return lcs(nums, nums2, nums.size(), nums2.size(), dp);
        
    }
};
class Solution {
public:
    long long int myans(vector<int> nums){
    int ans = 0;
    int n = nums.size();
    
    vector<int> dp(n,-1);
    
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    
    for(int i=2;i<n;i++){
 
        dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
    }
  
    return dp[n-1];

}
    
    int rob(vector<int>& v) {
        
    vector<int> t1, t2;
    int n = v.size();
    if(n == 1)
        return v[0];
    if(n == 2)
        return max(v[0], v[1]);
    //return 0;
    
    for(int i=0;i<n;i++){
        if(i!=0) t1.push_back(v[i]);
        if(i!=n-1) t2.push_back(v[i]);
    }
    
    return max(myans(t1), myans(t2));
        
    }
};
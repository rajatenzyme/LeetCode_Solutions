class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        int mini = INT_MAX;
        int maxi = 0;
        int ans = 0;
        
        for(int i=0;i<n;i++){
           
            ans += max(maxi, prices[i] - mini);
            mini = prices[i];
            
        }
        return ans;
    }
};
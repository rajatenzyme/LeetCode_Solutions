class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        int n = a.size();
        
        int prof = 0, tmp = INT_MAX;
        
        for(int i=0;i<n;i++){
            tmp = min(tmp, a[i]);
            prof = max(prof,  a[i] - tmp);
        }
        
        return prof;
        
    }
};
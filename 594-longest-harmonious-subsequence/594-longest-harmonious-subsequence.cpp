class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        
        unordered_map<int, int> mp;
        for(auto x : nums)
            mp[x]++;
        
        for(auto x : mp){
            if(mp.find(x.first+1)!=mp.end())
                ans = max(ans, mp[x.first] + mp[x.first+1]);
        }
        
        
        return ans;
    }
};
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map<int, int> mp;
        //mp[0] = 1;
        
        int s = 0, ans = 0;

        for(auto x : nums){
            s+=x;
            if(s == goal)
                ans++;
            
            if(mp[s-goal])
                ans+=mp[s-goal];
            
            mp[s]++;
        }
        return  ans;
    }
};
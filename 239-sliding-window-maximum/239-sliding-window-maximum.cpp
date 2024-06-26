class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<pair<int, int>> dq;
        
        for(int i=0;i<nums.size(); i++){
            // Check if curr element is going out of window
            if(!dq.empty() && dq.front().second <= i - k)
                dq.pop_front();
            // Mantain DESC Order
            while(!dq.empty() && dq.back().first < nums[i])
                dq.pop_back();
            
            dq.push_back({nums[i], i});
            if(i>=(k-1))
            ans.push_back(dq.front().first);
        }
        
        return ans;
    }
};
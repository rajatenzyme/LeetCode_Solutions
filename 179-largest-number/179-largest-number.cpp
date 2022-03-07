bool comp(int a, int b){
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(b) + to_string(a);
    
    return s1 > s2;

}


class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end(), comp);
        
        string ans = "";
        
        if(nums[0] == 0)
            return "0";
        
        for(auto x : nums)
            ans+=to_string(x);
        
        return ans;
        
    }
};
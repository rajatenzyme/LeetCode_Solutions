class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        //store last index of chars
        unordered_map<char, int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]] = i;
        }
        
//         for(auto x : mp)
//             cout<<x.first<<" "<<x.second<<" ";
//         cout<<endl;
        
        int curr = 0, last = 0;
        
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            
            curr = max(curr, mp[ch]);
            
            if(curr == i){
                //cout<<curr<<" ";
                ans.push_back(curr - last + 1);
                last = curr + 1;
            }
            
        }
        return ans;
    }
};
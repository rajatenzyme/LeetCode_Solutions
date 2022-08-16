class Solution {
public:
    int firstUniqChar(string s) {
        
        int n = s.length();
        unordered_map<char, int> mp;
        
        for (auto i : s)
            mp[i]++;
        
        for(int i=0;i<s.size();i++){
            if(mp[s[i]] == 1)
                return i;
        }
        return -1;
        
        
//         for(int i=0;i<s.length()-1;i++){
//             int c = 0;
//             for(int j=i+1;j<s.length();j++){
//                 if(s[i]!=s[j])
//                     c++;
//             }
//             cout<<c;
//             if(c == s.length()-i-1)
//                 return i;
//         }
        
//         return -1;
        
    }
};
class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        
        if(s.length() == 1)
            return s[0]-'A' + 1;
        
        int k = 1;
        for(int i=s.length()-1;i>=0;i--){
            if(i == s.length()-1)
                ans+= s[i]-'A'+1;
            else{
                ans+= pow(26,k) * (s[i]- 'A' + 1);
                k++;
            }
        }
        
        return ans;
        
    }
};
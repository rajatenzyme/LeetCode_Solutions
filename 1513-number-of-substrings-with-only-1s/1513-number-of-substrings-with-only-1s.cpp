class Solution {
public:
    int numSub(string s) {
        int n = s.length();
        
        int ans =0;
        
        
        for(long i=0;i<n;i++){
            
            long long int c= 0;
            while(s[i] == '1'){
                c++;
                i++;
            }
            
            
            if(c!=0)
            ans = (ans + c*(c+1)/2)%1000000007;
            
            
            
            
        }
        
        return ans;
        
    }
};
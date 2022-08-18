class Solution {
public:
    string convertToTitle(int n) {
        
        string ans = "";
        
        while(n>0){
            n--;
            
            // int rem = n % 26;
            // char t;
            // if(rem == 0)
            //     t = 'Z';
            // else
            //     
            char t= n % 26 + 'A';
            ans+= t;
            //cout<<ans<<endl;
            n = n / 26;
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
};
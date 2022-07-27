class Solution {
public:
    string countAndSay(int n) {
        string ans = "";
        if(n == 1)
            return "1";
        
        string prev = countAndSay(n-1);
        
        int count = 1;
        char ch = prev[0];
        
        for(int i=1;i<prev.length();i++){
            
            //count = 1;
            
            if(prev[i]!=prev[i-1]){
                ans+=to_string(count);
                ans+=ch;
                count = 1;
                ch = prev[i];
            }
            
            else{
                count++;
            }
            
            
        }
        ans+=to_string(count);
        ans+=ch;
        
        return ans;
        
    }
};
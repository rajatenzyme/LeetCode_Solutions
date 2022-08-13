class Solution {
public:
    
    bool isContains(queue<int> q, int x){
        while(!q.empty()){
            if(q.front() == x)
                return true;
            q.pop();
        }
        return false;
    }
    
    
    int lengthOfLongestSubstring(string s) {
        queue<int> q;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            while(isContains(q,s[i]))
                q.pop();
            q.push(s[i]);
            int n = q.size();
            ans = max(ans, n);
        }
        
        return ans;
        
    }
};
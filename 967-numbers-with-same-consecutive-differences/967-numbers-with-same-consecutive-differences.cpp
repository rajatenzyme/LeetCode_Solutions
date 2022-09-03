class Solution {
public:
    
    vector<int> solve(int n, int k, vector<int> &ans){
        
        queue<int> q;
        for(int i=1;i<10;i++)
            q.push(i);
        
        //int num = 0;
        int c = 1;
        
        while(!q.empty()){
            
            int sz = q.size();
            while(sz--){

                int curr = q.front();
                q.pop();
                if(c == n){
                    ans.push_back(curr);
                    continue;
                }

                int last_digit = curr % 10;

                int x = last_digit + k;
                int y = last_digit - k;
                
                if(x>=0 && x <= 9)
                    q.push(curr * 10 + x);

                
                if(k!=0 && y>=0 && y<=9)
                    q.push(curr * 10 + y);


            }
            c++;
             
        }
        
        return ans;
        
    }
    
    
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int> ans;
        
        solve(n, k, ans);
//         for(auto x : ans)
//             cout<<x;
        
        // for(int i=1;i<=9;i++){
        //     vector<int> temp = solve(i, n, k);
        //     for(auto x : temp)
        //         ans.push_back(x);
        // }
        
        return ans;
        
    }
};
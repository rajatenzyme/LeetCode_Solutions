class Solution {
public:
    int openLock(vector<string>& deadends, string target) {

        int ans = 0;
        unordered_set<string> deads, visited;
        
        for(auto &deadend: deadends)
            deads.insert(deadend);
        
        if(deads.find("0000")!= deads.end())
            return -1;
        
        queue<string> q;
        q.push("0000");
        visited.insert("0000");

        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                string curr = q.front();
                q.pop();

                if(curr == target)
                    return ans;
                
                for(int i=0; i<4; i++){
                    //clockwise
                    string nextState = curr;
                    if(nextState[i] == '9')
                        nextState[i] = '0';
                    else
                        nextState[i]++;
                    if((visited.find(nextState)== visited.end()) && (deads.find(nextState)== deads.end())){
                        q.push(nextState);
                        visited.insert(nextState);
                    }
                    //Anti-clockwise
                    nextState = curr;
                    if(nextState[i] == '0')
                        nextState[i] = '9';
                    else
                        nextState[i]--;
                    if((visited.find(nextState)== visited.end()) && (deads.find(nextState)== deads.end())){
                        q.push(nextState);
                        visited.insert(nextState);
                    }                    
                }
            }
            ans ++;
        }
    return -1;
    }
};
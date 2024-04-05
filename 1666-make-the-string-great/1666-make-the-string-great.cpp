class Solution {
public:
    string makeGood(string s) {

        stack<char> st;

        for(auto ch : s){
            if(st.empty()){
                st.push(ch);
            }
            else{
                char tp = st.top();
                if(ch == tp - 32 || ch == tp + 32 ){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
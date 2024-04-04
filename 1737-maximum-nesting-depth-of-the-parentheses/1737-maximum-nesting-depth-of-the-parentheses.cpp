class Solution {
public:
    int maxDepth(string s) {

        stack<char> st;
        int maxD = 0;

        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                st.push('(');
            }
            else if(s[i] == ')'){
                st.pop();
            }
            int sz = st.size();
            maxD = max(maxD, sz);
        }

        return maxD;
        
    }
};
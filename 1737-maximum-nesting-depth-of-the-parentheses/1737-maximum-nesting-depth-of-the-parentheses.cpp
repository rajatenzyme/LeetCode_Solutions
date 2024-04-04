class Solution {
public:
    int maxDepth(string s) {

        stack<int> st;
        int maxD = 0;

        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                st.push('(');
                int sz = st.size();
                maxD = max(maxD, sz);
            }
            else if(s[i] == ')'){
                st.pop();
            }
        }

        return maxD;
        
    }
};
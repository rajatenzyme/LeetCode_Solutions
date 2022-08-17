class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
       vector<string> dict = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> st;
        
        for(int i=0;i<words.size();i++){
            string str = "";
            int n = words[i].size();
            for(int j=0;j<n;j++){
                str+=dict[words[i][j]-'a'];
            }
            st.insert(str);
        }
        
        return st.size();
        
    }
};
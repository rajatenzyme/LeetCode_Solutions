class Solution {
public:
    
    vector<string> solve(map<int, string> dict, string digits){
        vector<string> ans;
        if(digits.length()==0){
            ans.push_back("");
            return ans;
        }
        
        vector<string> temp = solve(dict,digits.substr(1));
        
        // for(auto x : temp)
        //     cout<<x;
        
        for(auto i : dict[digits[0]-'0']){
           
            for(auto t : temp){
                ans.push_back(i + t);
            }
            
        }
        
        return ans;
        
        
        
//         for(auto x : temp){
//             string str = "";
//             string dig  = dict[digits[n]];
//             for(auto i : dig){
//                 str+=x+i;
//             }
            
//             ans.push_back(str);
        
//         }
        
        return ans;
        
        
    }
    
    vector<string> letterCombinations(string digits) {
      
        if(digits.length() == 0)
            return {};
        
        map<int, string> dict =  {
            {2, "abc"},
            {3, "def"},
            {4, "ghi"}, 
            {5, "jkl"}, 
            {6, "mno"},
            {7,"pqrs"},
            {8,"tuv"},
            {9,"wxyz"}};
        
        
        return solve(dict,digits);
        
    }
};
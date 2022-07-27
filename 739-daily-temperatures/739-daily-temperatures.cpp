class Solution {
public:
    vector<int> NGR(vector<int> arr){
        int n = arr.size();
        
        vector<int> ans;
        stack<pair<int, int>> st;
        
        for(int i=n-1; i>=0; i--){
            if(st.empty())
                ans.push_back(0);
            
            else{
                if(st.top().first >arr[i])
                    ans.push_back(st.top().second);
                else{
                    while(!st.empty() && st.top().first<=arr[i])
                        st.pop();
                    if(st.empty())
                        ans.push_back(0);
                    else
                        ans.push_back(st.top().second);
                }
            }
            
            st.push({arr[i], i});
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    
    
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int> ans;
        vector<int> my_ngr = NGR(temperatures);
        //return my_ngr;
        
        for(int i=0;i<temperatures.size();i++){
            if(my_ngr[i] - i < 0)
                ans.push_back(0);
            else
                ans.push_back(my_ngr[i] - i);
        }
        
        
        return ans;
    }
};
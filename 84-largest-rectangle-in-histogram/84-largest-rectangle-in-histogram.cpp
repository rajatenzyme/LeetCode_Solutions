class Solution {
public:
    vector<int> NSRF(vector<int> A){
        vector<int> v;
        int n = A.size();
        stack<pair<int, int>> st;

        for(int i=n-1;i>=0;i--){
            if(st.empty())
                v.push_back(n);

            else if(!st.empty()){

                if(st.top().first < A[i])
                    v.push_back(st.top().second);
                else {
                        while(!st.empty() && st.top().first >= A[i]){
                            st.pop();
                        }
                        if(st.empty())
                            v.push_back(n);
                        else
                            v.push_back(st.top().second);
                }
            }
            st.push({A[i], i});
        }
        reverse(v.begin(), v.end());
        return v;

    }


vector<int> NSLF(vector<int> A){

    vector<int> v;
    int n = A.size();
    stack<pair<int, int>> st;

   

    for(int i=0;i<n;i++){
        if(st.empty())
            v.push_back(-1);

        else if(!st.empty()){

            if(st.top().first < A[i])
                v.push_back(st.top().second);
            else {
                    while(!st.empty() && st.top().first >= A[i]){
                        st.pop();
                    }
                    if(st.empty())
                        v.push_back(-1);
                    else
                        v.push_back(st.top().second);
            }
        }
        st.push({A[i], i});
    }
    return v;

}

    
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        
        vector<int> right= NSRF(heights) ;
        vector<int> left = NSLF(heights);
        
        int ans = INT_MIN;
        
        for(int i=0;i<n;i++){
                ans = max(ans, heights[i] * (right[i] - left[i] - 1));      
        }
        
        return ans;
        
        
    }
};
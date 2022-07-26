class Solution {
public:
    unordered_map<int ,int> nextLargerElement(vector<int> arr, int n){
        
        //vector<long long>  ans;
        
        unordered_map<int ,int> mp;
        
        stack<int> st;
        
        
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                st.push(arr[i]);
                mp.insert({arr[i], -1});
                //mp{arr[i]} = -1;
                //ans.push_back(-1);
            }
            
            else if(!st.empty() && st.top()>arr[i]){
                mp.insert({arr[i], st.top()});
                //mp{arr[i]} = st.top();
                //ans.push_back(st.top());
                st.push(arr[i]);
            }
            else if(!st.empty() && st.top()<=arr[i]){
                while(!st.empty() && st.top()<=arr[i]){
                    st.pop();
                }
                if(st.empty()){
                    mp.insert({arr[i], -1});
                    //mp{arr[i]} = -1;
                    //ans.push_back(-1);
                    st.push(arr[i]);
                }
                else{
                    mp.insert({arr[i], st.top()});
                    //mp{arr[i]} = st.top();
                    //ans.push_back(st.top());
                    st.push(arr[i]);
                }
            }
        }
        
        //reverse(ans.begin(), ans.end());
        
        return mp;
        // Your code here
    }
    
    
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int ,int> mp = nextLargerElement(nums2, nums2.size());
        
        vector<int> ans;
        
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){
                ans.push_back(mp[nums1[i]]);    
            }
        }
        
        return ans;
        
    }
};
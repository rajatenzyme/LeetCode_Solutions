class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int mx = *max_element(arr.begin(), arr.end());
        
        vector<int> tmp(mx+1, 0);
        
        for(int i=0;i<arr.size();i++){
            tmp[arr[i]] = 1;
        }
        
//         for(auto x : tmp)
//             cout<<x<<" ";
        
//         cout<<endl;
        
        int c = 0;
        int i;
        for(i=1;i<=mx;i++){
            if(tmp[i] == 0)
                c++;
            if(c==k)
                return i;
        }
        
        return arr.size()+k;
        
        
    }
};
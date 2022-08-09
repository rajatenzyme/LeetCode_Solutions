class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int prefixMul[n];
        prefixMul[0] = nums[0];
        for(int i=1;i<n;i++){
            int val  = prefixMul[i-1];
            if(val ==0)
                val = 1;
            prefixMul[i] = nums[i]*val;
            //cout<<prefixMul[i]<<"ddd";
        }
        
        int suffixMul[n];
        suffixMul[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            int val  = suffixMul[i+1];
            if(val ==0)
                val = 1;
            suffixMul[i] = nums[i]*val;
        }
        
//         for(int i=0;i<n;i++)
//             cout<<prefixMul[i]<<" ";
//         cout<<endl;
        
//          for(int i=0;i<n;i++)
//             cout<<suffixMul[i]<<" ";
//         cout<<endl;
        
        //int ans = INT_MIN;
        
        int mx1 = INT_MIN, mx2 = INT_MIN;
        for(int i=0;i<n;i++){
            mx1 = max(mx1, prefixMul[i]);
        }
        
        for(int i=0;i<n;i++){
            mx2 = max(mx2, suffixMul[i]);
        }
     
        cout<<mx1<<" "<<mx2;
        
        return max(mx1, mx2);
        
        
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> ans(n);

        vector<int>preFixProd(n) ;
        preFixProd[0] = nums[0];
        for(int i=1;i<n;i++){
            preFixProd[i] = preFixProd[i-1] * nums[i];
        }

        vector<int>sufFixProd(n) ;
        sufFixProd[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            sufFixProd[i] = sufFixProd[i+1] * nums[i];
        }

        for(int i=0;i<n;i++){
            if(i == 0)
                ans[i] = sufFixProd[i+1];
            else if(i == n-1)
                ans[i] = preFixProd[n-2];
            else{
                ans[i] = preFixProd[i-1] * sufFixProd[i+1];
            }
        }
        
        return ans;
    }
};
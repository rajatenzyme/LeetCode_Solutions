


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;
        
        int leftMul[n], rightMul[n];
        
        leftMul[0] = 1;
        leftMul[1] = nums[0];
        for(int i=2;i<n;i++)
            leftMul[i] = leftMul[i-1] * nums[i-1];
        
        // for(int i=0;i<n;i++)
        //     cout<<leftMul[i]<<" ";
        
        rightMul[n-1] = 1;
        rightMul[n-2] = nums[n-1];
        
        for(int i=n-2;i>=0;i--)
            rightMul[i] = rightMul[i+1] * nums[i+1];
        
        // for(int i=0;i<n;i++)
        //     cout<<rightMul[i]<<" ";
        
        for(int i=0;i<n;i++){
            ans.push_back(leftMul[i] * rightMul[i]);
        }
        
        return ans;
    }
};
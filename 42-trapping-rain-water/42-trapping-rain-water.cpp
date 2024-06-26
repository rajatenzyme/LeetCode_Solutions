class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        vector<int>leftMax(n);
        
        leftMax[0] = height[0];
            
        for(int i=1;i<n;i++){
            if(i == n-1) leftMax[i] = leftMax[i-1];
            else
            leftMax[i] = max(leftMax[i-1], height[i]);
        }
        
        vector<int> rightMax(n);
        
        rightMax[n-1] = height[n-1];
            
        for(int i=n-2;i>=0;i--){
            
            rightMax[i] = max(rightMax[i+1], height[i]);
        }
        
//         for(auto x : rightMax){
//             cout<<x << " ";
//         }
        
        
        int ans = 0;
        
        for(int i=0;i<n-1;i++){
            ans+= min(leftMax[i], rightMax[i]) - height[i];
        }
        
        
        
        
        
        return ans;
        
        
    }
};
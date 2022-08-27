class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int n = colors.size();
        int ans = 0;
        
        for(int i=0;i<n;i++){
            int temp;
            for(int j=n-1;j>=i;j--){
                if(colors[j]!=colors[i]){
                    temp = j - i;
                    break;
                }
            }
            ans = max(ans, temp);
        }
        
        return ans;
    }
};
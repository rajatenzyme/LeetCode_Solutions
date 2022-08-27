class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int n = colors.size();
        //int ans = 0;
        
        //Brute - force
        /*
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
        */
        
        int ans = 0;
    
        int low = 0, high = n-1;
        
        int ans1 = 0, ans2 = 0;
        
        while(low<=high){
            if(colors[low]!=colors[high]){
                ans1 = max(ans1, high - low);
                break;
            }
            else
                low++;
        }
        
        low = 0, high = n-1;
        while(low<=high){
            if(colors[low]!=colors[high]){
                ans2 = max(ans2, high - low);
                break;
            }
            else
                high--;
                
        }
        
        return max(ans1,ans2);
    }
};
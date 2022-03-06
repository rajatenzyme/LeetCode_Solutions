class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int n = a.size();
        
        int cnt = 0, ele;
        
        for(int i = 0;i<n;i++){
            if(cnt == 0)
                ele = a[i];
            
            if(ele == a[i])
                cnt++;
            else
                cnt--;
        }
        
        return ele;
        
        
        
    }
};
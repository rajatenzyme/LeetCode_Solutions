class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        
        int n = a.size();

        vector<int> ans;

        int l = 0, h = 0;
        
        for(int i=0;i<n-1;i++){
            if(a[i]<0 && a[i+1]>=0){
                l = i;
                h = i+1;
                break;
            }
        }

        //cout<<l<<" "<<h<<endl;
        //return ans;
        
        if(l==0 && h==0){
            for(int i=0;i<n;i++){
                ans.push_back(a[i] * a[i]);
            }
            if(a[0]<0){
            reverse(ans.begin(), ans.end());
            return ans;
            }
            else
            {
            return ans;
            }
        }
        
        
        while(l>=0 && h<n){
            if(abs(a[l]) < a[h]){
                ans.push_back(a[l]*a[l]);
                l--;
            }
            else{
                ans.push_back(a[h]*a[h]);
                h++;
            }
        }

        while(l>=0){
            ans.push_back(a[l]*a[l]);
            l--;
        }

        while(h<n){
            ans.push_back(a[h]*a[h]);
            h++;
        }
            return ans;
    }
};
class Solution {
public:
    int pivotInteger(int n) {

        vector<int>preSum(n+1, 0);
        preSum[1] = 1;

        for(int i = 2; i<= n;i++){
            preSum[i] = i+ preSum[i-1];
        }

        vector<int>postSum(n+1, 0);
        postSum[n] = n;

        for(int i = n-1; i>=0;i--){
            postSum[i] = i + postSum[i+1];
        }

        // for(auto x : preSum)
        //     cout<<x<<" ";
        // cout<<endl;
        // for(auto x: postSum)
        //     cout<<x<<" ";

        for(int i=1;i<preSum.size();i++){
            if(preSum[i] == postSum[i])
                return i;
        }


        return -1;
    }
};
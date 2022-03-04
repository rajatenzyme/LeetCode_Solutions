// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> a ,int n) {
        
        vector<int> ans;
        
        a[n-1]+=1;
        int carry = a[n-1]/10;
        int digit = a[n-1]%10;
        
        ans.push_back(digit);
        
        for(int i=n-2; i>=0; i--){
            
            int num = carry + a[i];
            carry = num / 10;
            digit = num % 10;
            
            ans.push_back(digit);
            
        }
        if(carry!=0)
        ans.push_back(carry);
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
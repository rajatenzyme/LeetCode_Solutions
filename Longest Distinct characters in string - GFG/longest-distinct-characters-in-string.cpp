// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    
        int l = 0;
        int r = 0;
        int ans = 0;
        
        int store[256] = {0};
        
        
        while(r < s.length()){
            store[s[r]]++;
            
            while(store[s[r]]>1){
                store[s[l]]--;
                l++;
            }
            
            ans = max(ans, r-l+1);
            r++;
        }
        
        return ans;
}
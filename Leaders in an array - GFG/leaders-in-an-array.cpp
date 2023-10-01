//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
  
    
    
    vector<int> leaders(int a[], int n){
        // Code here
        
        vector<int> ans;
        vector<int>maxRight;
        
        vector<int>a_2;
        for(int i=n-1;i>=0;i--)
            a_2.push_back(a[i]);
            
        maxRight.push_back(a_2[0]);
        
        for(int i=1;i<n;i++){
          maxRight.push_back(max(a_2[i], maxRight[i-1]));
        }
        
        reverse(maxRight.begin(), maxRight.end());
        
        for(int i=0;i<n;i++){
            if(a[i] == maxRight[i])
                ans.push_back(a[i]);
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends
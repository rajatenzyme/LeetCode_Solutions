// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    // void f(int &k, int N){
    //     if(k == N+1)
    //         return;
    //     cout<<k;
    //     k++;
    // }
    int k = 1;
    void printNos(int N)
    {
        
        if(k == N+1)
            return;
        cout<<k++<<" ";
        printNos(N);
    }
};

// { Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
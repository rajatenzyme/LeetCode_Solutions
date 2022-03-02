// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void segregate0and1(int a[], int n) {
        
        // One approach
        
        // int count0 = 0, count1 = 0;
        
        // for(int i=0;i<n;i++){
        //     if(arr[i] == 0)
        //         count0++;
        //     else
        //         count1++;
        // }
        
        // for(int i=0;i<count0;i++){
        //     arr[i] = 0;
        // }
        
        // for(int i=count0;i<(count0+count1);i++){
        //     arr[i] = 1;
        // }
        
        //Second Approach
        
        int low = 0, high = n-1;
        while(low<high){
            if(a[low] == 0)
                low++;
            else if(a[high] == 1)
                high--;
            else{
                swap(a[low], a[high]);
                low++;
                high--;
            }
        }
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
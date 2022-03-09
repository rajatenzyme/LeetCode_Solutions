// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
int lastOcc(int nums[], int n, int target){
        int ans = -1;
        
        int low = 0;
        int high = n - 1;
        
        
        while(low<=high){
            
            int mid = low + (high-low)/2; 
            
            if(target == nums[mid]){
                ans = mid;
                low = mid + 1;
            }
            
            else if(target < nums[mid]){
                high = mid - 1;
            }
            
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
    
    int firstOcc(int nums[], int n, int target){
        int ans = -1;
        
        int low = 0;
        int high = n - 1;
        
        
        while(low<=high){
            
            int mid = low + (high-low)/2; 
            
            if(target == nums[mid]){
                ans = mid;
                high = mid - 1;
            }
            
            else if(target < nums[mid]){
                high = mid - 1;
            }
            
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
    



class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    
	    if(firstOcc(arr, n, x) == -1)
	        return 0;
	    
	   return lastOcc(arr, n, x) - firstOcc(arr, n, x) +1 ;
	    
	    
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
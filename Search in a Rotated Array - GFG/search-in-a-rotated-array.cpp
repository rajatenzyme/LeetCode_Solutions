// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    int findPivot(int a[], int n){

        int low = 0, high = n - 1;
        
        while(low <= high){
             if(a[low] <= a[high])
                return low;

            int mid = low + (high - low)/2;
            int prev = (mid + n - 1) % n;
            int next = (mid + 1) % n;
            
            if((a[mid] <= a[prev]) && (a[mid] <= a[next]))
                return mid;
            
            else if(a[low] <= a[mid])
                low = mid + 1;
            else
                high = mid - 1;
            
        }
        return -1;
    }
    
    
    int binarySearch(int a[], int low, int high, int x){
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(x == a[mid])
                return mid;
            else if(x < a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        
        return -1;
    }
    
    
    int search(int a[], int l, int h, int x){
        
        int pivot = findPivot(a,h+1);
        
        int left = binarySearch(a, 0, pivot-1, x);
        int right = binarySearch(a, pivot, h, x);
        
        if(left == -1 && right == -1)
            return -1;
        else if(left != -1 && right == -1)
            return left;
        else
            return right;
        
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends
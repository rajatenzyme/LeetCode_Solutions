// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int A[], int n) {
    
    

    vector<int> leftMax(n);
    leftMax[0] = A[0];

    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1], A[i]);
    }

    vector<int> rightMin(n);
    rightMin[n-1] = A[n-1];

    for(int i=n-2;i>=0;i--){
        rightMin[i] = min(rightMin[i+1], A[i]);
    }

    for(int i=0;i<n;i++){
        if(leftMax[i] == A[i] && rightMin[i] == A[i] && i!=n-1 && i!=0)
            return A[i];
    }

    return -1;
    
    
}
class Solution {
public:
    
    int findPivot(vector<int> &a){
        int n = a.size();
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
    
    
    int binarySearch(vector<int>& a, int low, int high, int x){
        
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
    
    
    int search(vector<int>& a, int x) {
        
        int n = a.size();
        int low = 0, high = n - 1;
        
        int pivot = findPivot(a);
        
        int left = binarySearch(a, 0, pivot-1, x);
        int right = binarySearch(a, pivot, n-1, x);
        
        if(left == -1 && right == -1)
            return -1;
        else if(left != -1 && right == -1)
            return left;
        else
            return right;
        
        
        
    }
};
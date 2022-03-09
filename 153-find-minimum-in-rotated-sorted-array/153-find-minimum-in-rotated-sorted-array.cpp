class Solution {
public:
    int findMin(vector<int>& a) {
        
        int N = a.size();
        
        int low = 0, high = a.size() - 1;
        
        while(low<=high){
            if(a[low] <= a[high])
                return a[low];
            
            int mid = low + (high - low)/2;
            int prev = (mid + N - 1) % N;
            int next = (mid + 1) % N;
            if((a[prev] >= a[mid]) && (a[next] >= a[mid]))
                return a[mid];
            
            else if(a[low] <= a[mid])
                low = mid + 1;
            else 
                high = mid - 1;
        }
        
        return -1 ;
    }
};

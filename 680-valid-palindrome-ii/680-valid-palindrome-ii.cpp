class Solution {
public:
    bool isPalindrome(string s, int i, int j){
        int n = s.length();
        //int low = 0, high = n-1;
        
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    
    bool validPalindrome(string s) {
        int n = s.length();
        int low = 0, high = n-1;
        
        while(low<=high){
            if(s[low]!=s[high]){
                return (isPalindrome(s,low+1,high) || isPalindrome(s,low,high-1));
                    
            }
            low++;
            high--;
        }
        return true;
    }
};
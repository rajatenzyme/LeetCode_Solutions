class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        n = len(strs)
    
        if n == 0:
            return ""
        
        # Sort the list of strings
        strs.sort()
        
        # Compare the first and the last string in the sorted list
        a = strs[0]
        b = strs[-1]
        
        ans = ""
        
        for i in range(len(a)):
            if a[i] == b[i]:
                ans += a[i]
            else:
                break
        
        return ans
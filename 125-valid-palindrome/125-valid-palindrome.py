class Solution:
    def isPalindrome(self, s: str) -> bool:
        s1= str()
        s = s.lower()
        for i in s:
            if(i.isalnum()):
                s1+=i
            
        #print(s1)
        return s1 == s1[::-1]
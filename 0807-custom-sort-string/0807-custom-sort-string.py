class Solution:
    def customSortString(self, order: str, s: str) -> str:
        
        d = {}
    
        for i in s:
            if i in order:
                if i in d:
                    d[i]+=1
                else:
                    d[i] = 1

        ans = ""

        for i in order:
            if i in d.keys():
                if(d.get(i) > 0):
                    freq = d.get(i)
                    ans+=i*freq
        
        for i in s:
            if(i not in d.keys()):
                ans+=i
        
        return ans
        
from collections import Counter
class Solution:
    def longestPalindrome(self, s: str) -> int:
        ans, flag = 0, 0
        d = Counter(s)

        print(d)

        for k, v in d.items():
            if v%2 == 0:
                ans+= v
            else:
                ans+= v-1
                flag = 1

        if flag == 1:
            return ans + 1
            

        return ans

        
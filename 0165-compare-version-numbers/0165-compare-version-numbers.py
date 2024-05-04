class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        
        v1 = list(map(int, version1.split('.')))
        v2 = list(map(int, version2.split('.')))
        
        len_diff = len(v1) - len(v2)
        if len_diff > 0:
            v2 += [0] * len_diff
        elif len_diff < 0:
            v1 += [0] * abs(len_diff)
        
        print(v1, v2)
        
        for i in range(len(v1)):
            if v1[i] < v2[i]:
                return -1
            elif v1[i] > v2[i]:
                return 1
        
        return 0 
        # ver1 = "".join([str(int(num)) for num in v1])
        # ver2 = "".join([str(int(num)) for num in v2])

        # print(ver1, ver2)
        
        # if ver1 == ver2:
        #     return 0
        # elif ver1 < ver2:
        #     return -1
        # else:
        #     return 1

        # l11 = int(version1.split('.')[0])
        # try:
        #     l12 = int(version1.split('.')[1])
        # except:
        #     l12 = 0
        # try:
        #     l13 = int(version1.split('.')[2])
        # except:
        #     l13 = 0

        # l21 = int(version2.split('.')[0])
        # try:
        #     l22 = int(version2.split('.')[1])
        # except:
        #     l22 = 0
        # try:
        #     l23 = int(version2.split('.')[2])
        # except:
        #     l23 = 0
        
        # print(l11, l12, l13)
        # print(l21, l22, l23)

        # if l11 == l21 and l12 == l22 and l13 == l23:
        #     return 0
        # elif (l11 > l21) or (l11 == l21 and l12>l22) or (l11 == l21 and l12==l22 and l13>l23):
        #     return 1
        # else:
        #     return -1

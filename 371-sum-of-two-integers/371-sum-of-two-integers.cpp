class Solution {
public:
 
    int getSum(int a, int b) {
        
//         //int carry = 0;
//         while(b!=0){
//             unsigned carry = a & b;
//             a = a ^ b;
//             b = carry<< 2;
//         }
        
//         return a;
        vector<int> v = {a,b};
        return accumulate(v.begin(), v.end(), 0);
    }
};
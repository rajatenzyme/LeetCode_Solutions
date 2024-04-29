class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        // int xor = 0;
        for(auto num : nums)
            k ^= num;
        
        int cnt = 0;
        while(k>0){
            int rem = k % 2;
            cnt+=rem;
            k = k / 2;
        }


        return cnt;
        // __builtin_popcount(k);;
        
    }
};
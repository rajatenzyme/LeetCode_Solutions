class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans=0;
        int prev=0;
        int count=0;

        int x = *max_element(nums.begin() , nums.end());
        
        for(int i=0 ; i< nums.size() ; i++){
            if(x==nums[i]){
                count++;
            }

            if(count==k){
                while(count==k){
                    if(nums[prev]==x){
                        count--;
                    }
                    prev++;
                    ans+=nums.size()-i;
                }
            }
        }
        return ans;
    }
};
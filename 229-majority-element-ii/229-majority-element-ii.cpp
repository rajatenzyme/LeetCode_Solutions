class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int> ans;
        
        int num1 = INT_MIN, num2 = INT_MIN, c1 = 0, c2 = 0;
        
        for(auto ele : nums){
            if(ele == num1)
                c1++;
            else if(ele == num2)
                c2++;
            else if(c1 == 0){
                num1 = ele;
                c1 = 1;
            }
            else if(c2 == 0){
                num2 = ele;
                c2 = 1;
             }
            
            else{
                c1--;
                c2--;
            }     
        }
        
        //cout<<num1<<" "<<num2;
        
        int num1_count = 0, num2_count = 0;
        
        for(int x : nums){
            if(x == num1)
                num1_count++;
            if(x == num2)
                num2_count++;
        }
        
        if(num1_count > nums.size()/3)
            ans.push_back(num1);
        
        if(num2_count > nums.size()/3)
            ans.push_back(num2);
        
        return ans;
        
        
    }
};
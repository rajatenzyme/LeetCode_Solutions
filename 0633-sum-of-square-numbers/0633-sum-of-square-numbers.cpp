class Solution {
public:
    bool judgeSquareSum(int c) {
        long long start = 0; 
        long long end = sqrt(c);

        while(start <= end){
            long long left = start * start + end * end;
            if(left == c)
                return true;
            else if(left < c)
                start ++;
            else
                end --;
        }
        return false;
    }
};
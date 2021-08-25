class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c <= 2) return true;
        
        long long i = 0, j = (int)sqrt(c);
        
        while(i <= j) {
            int num = i*i + j*j;
            if(num == c)
                return true;
            
            if(num < c)
                i++;
            else
                j--;
        }
        return false;
    }
};

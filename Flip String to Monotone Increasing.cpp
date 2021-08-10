class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int oneToZero  = 0;
        int zeroToOne  = 0;
        
        for(const char &ch : s) {
            if(ch == '1') oneToZero++;
            else          zeroToOne++;
            
            zeroToOne = min(zeroToOne, oneToZero);
        }
        return zeroToOne;
    }
};

class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        // if(n>>)
        while(n != 0) {
            if(n & 0x1 == 1) {
                res++;
            }
            n = n>>1;
        }
        return res;
    }
};
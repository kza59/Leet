class Solution {
public:
    int hammingDistance(int x, int y) {
        int res{0};
        while(x != 0 || y != 0) {
            if((x & 0x1) != (y & 0x1)) {
                res += 1;
            }
            x = x >> 1;
            y = y >> 1;        }
        return res;

    }
};

//0 0 0 1
//0 1 0 0
//0 1 0 1
//



//0 1 1
//0 0 1
//0 1 0
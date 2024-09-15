class Solution {
public:
    int minBitFlips(int start, int goal) {

        //need to discover all bit differences
        int count{0};
        
        for(int i{0};i<32;++i) {
            // cout << start & 0x1 << endl;

            if((start & 0x1) != (goal & 0x1)) count++;
            start = start >> 1;
            goal = goal >> 1;
        }
        return count;
    
    }
};


//10: 1010
//7 : 0111
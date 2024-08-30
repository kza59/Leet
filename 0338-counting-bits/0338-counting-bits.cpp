class Solution {
public:
    int func(int n) {
        int r = 0;
        while (n > 0) {
            r+=(n & 0x1); 
            n = n >> 1;      
        }
        return r;
    }
    vector<int> countBits(int n) {
        vector<int> result = {};
        result.push_back(0);
        if(n == 0) return result;
        result.push_back(1);
        if(n == 1) return result;
        result.push_back(1);
        if(n == 2) return result;
        result.push_back(2);
        if(n == 3) return result;
        //if the number is a power of two then we can easily say that there is one 1 in it
        int a = 4;
        while(a <= n) {
        double r = log2(a);
        if(r == floor(r)) {result.push_back(1);}
        else {result.push_back(func(a));}
            
        ++a;
            
        }
        return result;
    }
};
// 2: 0,1,1
// 4: 0,1,1,2,1
// 8: 0,1,1,2,1,2,2,3,1
// 16:0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4,1



// 2: 0,1,1
// 3: 0,1,1,2
// 4: 0,1,1,2,1
// 5: 0,1,1,2,1,2
// 6: 0,1,1,2,1,2,2
// 7: 0,1,1,2,1,2,2,3
// 8: 0,1,1,2,1,2,2,3,1
// 9: 0,1,1,2,1,2,2,3,1,2
// 10:0,1,1,2,1,2,2,3,1,2,2
// 11:0,1,1,2,1,2,2,3,1,2,2,3
// 12:0,1,1,2,1,2,2,3,1,2,2,3,2
// 13:0,1,1,2,1,2,2,3,1,2,2,3,2,3
// 14:0,1,1,2,1,2,2,3,1,2,2,3,2,3,3
// 15:0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4
// 16:0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4,1
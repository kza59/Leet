class Solution {
public:
    unsigned long long int nCk(unsigned long long int n, unsigned long long int k) {   
        if (k > n) return 0;
        if (k == 0 || k == n) return 1;
        unsigned long long res = 1;
        for (unsigned long long i = 1; i <= k; ++i) {
            res *= (n - (i - 1));
            res /= i;
        }
        return res;
    }
    int climbStairs(int n) {
        int a = n;
        int k = 0;
        int res = 0;
        while(a - k >= k) {
            res += nCk(a-k,k);
            k++;
        }
        return res;
    }
};
// n = 2 : (1,1) (2) 1 + n-1
// n = 3 : (1,1,1) (1,2) (2,1) 1 + n-1 
// n = 4 : (1,1,1,1) (1,1,2) (1,2,1) (2,1,1) (2,2) 1 + n - 1
// n = 5 : (1,1,1,1,1) (1,1,1,2) (1,1,2,1) (1,2,1,1) (2,1,1,1) (2,2,1) (2,1,2) (1,2,2) 1 + n - 1
// n = 6 : (1,1,1,1,1,1) (1,1,1,1,2) (1,1,1,2,1) (1,1,2,1,1) (1,2,1,1,1) (2,1,1,1,1) (1,1,2,2) (1,2,1,2) (2,1,1,2) (2,1,2,1) (2,2,1,1) (1,2,2,1) (2,2,2) 
// nchoose0 + (n-1)choose1 + (n-2)choose2 + (n-3)choose3
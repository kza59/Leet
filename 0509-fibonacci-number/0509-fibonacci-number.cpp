class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 1;
        if(n == 3) return 2;
        if(n == 4) return 3;
        if(n == 5) return 5;
        return fib(n-1) + fib(n-2);
    }
};
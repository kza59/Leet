class Solution {
public:
    int mySqrt(int x) {
        float a = 1;
        if(x == 1) return x;
        int low{0},high{x/2};
        int result = 0;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            long long midSquared = (long long)mid * mid;
            if(midSquared == x) return mid;
            else if(midSquared < x) {
                low = mid + 1;
                result = mid;
            }
            else high = mid - 1;
        }


        return result;
    }
};
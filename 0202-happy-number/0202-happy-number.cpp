class Solution {
public:
    int sumDigs(int a) {
        int sum = 0;
        while(a != 0) {
            sum += pow(a % 10, 2);
            a /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            n = sumDigs(n);
        }
        return n == 1;
    }
};
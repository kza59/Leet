class Solution {
public:
    int reverse(int x) {
        bool n = false;
        long long res = 0;
        if(x<0) {
            n = true;
            }
        vector<int> v;
        long long b = 0;
        x = abs(x);
        while(x>0) {
          if(res > INT_MAX || res < INT_MIN) return 0;           
            b = x%10;
            x  = x/10;
            res =  b + res*10;

            // res += 
        }
        // for(int i{0};i<v.size();++i) {
        //     res += v[i]*pow(10,(v.size()-i-1));
        // }
        // for(auto& item : v) {
        //     cout << item << endl;
        // }
        if(n) {
            res *= -1;
        }
        if(res > INT_MAX || res < INT_MIN) return 0;
        return static_cast<int>(res);
    }
};
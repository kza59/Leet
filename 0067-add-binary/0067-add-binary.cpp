class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        string res1 = "";
        int carry = 0;
        int diff = a.length() > b.length() ? a.length()-b.length() : b.length()-a.length();
        for(int i{0};i<diff;++i) {
            res += '0';
        }
        if(a.length() > b.length()) {
            res += b;
        }
        else {
            res += a;
            a = b;
        }
        reverse(res.begin(),res.end());
        reverse(a.begin(),a.end());
        for(int j{0};j<res.length();++j) {
            if((res[j] == '1' && a[j] == '1') && carry) {
                res1 += '1';
                carry = 1;
            }
            else if((res[j] == '1' || a[j] == '1') && carry) {
                res1 += '0';
                carry = 1;
            }
            else if(carry) {
                
                res1 += '1';
                carry = 0;
            }
            else if(res[j] == '1' && a[j] == '1') {
                res1 += '0';
                carry = 1;
            }
            else if((res[j] == '1' && a[j] == '0') || (a[j] == '1' && res[j] == '0')) {
                res1 += '1';
            }
            else {
                res1 += '0';
            }
            cout << "RES: " << res1 << endl;
        }
        if(carry) res1 += '1';
        reverse(res1.begin(),res1.end());
        return res1;

        
    }
};
//1010
//1011
//10101

// 1 1 -> 0 carry true
// 0 0 -> 1 carry false
// 1 1 -> 1 carry true
// 0 1 -> 0 carry false
// 1 0 -> 
//10101
//10110
//10101
//01101
//110101
//010001


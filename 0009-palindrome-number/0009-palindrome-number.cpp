class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        string s = to_string(x);
        string newstr{""};
        for(size_t i{s.length()};i>0;i--) {
            newstr += s[i-1];
        }
        return newstr == s;
    }
};
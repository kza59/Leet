class Solution {
public:
bool repeated(string s,char c) const {
for(char& item : s) {
    if(item == c) {
        return true;
    }
}
return false;
}
    int lengthOfLongestSubstring(string s) {
        string longest;
        int n{0};
        if(s.length() == 1) {
            return 1;
        }
        for(int i{0};i<s.length();++i) {
            while(repeated(longest,s[i])) {
            longest = longest.substr(1,longest.length());
            }
                longest += s[i];
                if(longest.length()>n) {
                    n = longest.length();
                }
        }
        return n;
    }
};
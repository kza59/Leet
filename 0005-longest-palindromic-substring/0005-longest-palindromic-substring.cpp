class Solution {
public:
    string longestPalindrome(string s) {
        string longest;
        longest += s[0];
        int n{0},l{1};
        int left,right;
        if(s.length() == 1) {
            return s;
        }
        if(s.length() == 2 && s[0] == s[1]) {
            return s;
        }
        for(int i{1};i<s.length()-1;++i) {
            left = i-1; 
            right = i+1;
            if(s[left] == s[right]) {//the median case
                // else {
                while(left > 0 && right < s.length() && s[left-1] == s[right+1]) {
                    left--;
                    right++;
                }
                if(left == 0 && s.length()%2 == 0) {
                    while(s[right+1] == s[left] && s[right+1] == s[i]) {
                        ++right;
                    }
                }
                // }
                if(right-left+1>n) {
                    longest = s.substr(left,right-left+1);
                    n = longest.length();
                    l = 0;
                }
            }
            //the doubled case : s[i] == s[i+1] 
            //while(s[i-1] == s[i+2]
            if(s[i] == s[i+1]) {
                cout << s[i] << s[i+1] << endl;
                left = i;
                right = i+1;
                while(left > 0 && right < s.length() && s[left-1] == s[right+1]) {
                    left--;
                    right++;
                if(right-left+1>n) {
                    longest = s.substr(left,right-left+1);
                    n = longest.length();
                }
                }
            }
            if(s[left] == s[i]) {
                if(2>n) {
                    longest = s.substr(left,2);
                    n = longest.length();
                }
            }
            if(s[i] == s[right]) {
                while(s[right] == s[right+1]) {
                    right++;
                }
            if(right-i+1>n) {
                    longest = s.substr(i,right-i+1);
                    n = longest.length();
                }
            }

            // while(s[i+1] == s[i]) {
            //         right++;
            // }
            // if(s[i] == s[i+1]) {
            //         if((s.substr(i,2)).length()>n) {
            //         longest = s.substr(i,2);
            //         n = longest.length();
            //         // l = 0;
            //     }
            // }
            // if(s[i] == s[i-1]) {
            //         if((s.substr(i-1,2)).length()>n) {
            //         longest = s.substr(i-1,2);
            //         n = longest.length();
            //         // l = 0;
            //     }
            // }
        } 
        return longest;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(auto& item : s) 
        {
            if(isalnum(item)) res += tolower(item);
        }
        int left{0};
        int right = res.size() - 1;
        while(left < right) {
            if(res[left] != res[right]) return false;
            left++;
            right--;
        }
        return true;
        
    }
};
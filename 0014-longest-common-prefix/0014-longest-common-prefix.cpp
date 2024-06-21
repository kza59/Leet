class Solution {
public:
    bool test(vector<string>& strs, int n) {
        char t = strs[0][n];
        for(auto& item : strs) {
            if(item[n] != t) return false;
        }
                // cout << n << " " << t << endl;
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string res, res1;
        sort(strs.begin(),strs.end());
        if(strs.size() <= 1) return strs[0];
        for(int i{0};i<strs[0].length();++i) {
            if(test(strs,i)) res += strs[0][i];
            else break; //finding prefix
            cout << res << endl;
        }
        return res;

    }
};
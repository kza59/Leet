class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> lookup = {"0",   "1",   "abc",  "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> result;
        if(digits.length() == 0) return result;
        result.push_back("");
        int a = 0, b = 1;
        for (auto digit : digits) {
            string list = lookup[digit - '0'];

            b = result.size();
            for (auto& item : list) {
                for (int i{a}; i < b; ++i) {
                    result.push_back(result[i] + item);
                }
            }
            a = b;
        }
        return vector<string>(result.begin() + a, result.end());
    }
};
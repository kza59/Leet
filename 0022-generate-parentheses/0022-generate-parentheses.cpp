class Solution {
public:
bool validParentheses(string s) {
    stack<int> sta;
    if(s[0] == ')') return false;
    for(auto& item : s) {
        if(item == '(') {
            sta.push(1);
        }
        if(!sta.empty() && item == ')') {
            sta.pop();
        }
    }
    return sta.empty();
}
bool search(vector<string> v, string s) {
    for(auto& item : v) {
        if(item == s) return true;
    }
    return false;
}
void backtrack(vector<string>& res, string& current, int open, int close, int max) {
        if (current.length() == max * 2) {
            res.push_back(current);
            return;
        }
        
        if (open < max) {
            current += '(';
            backtrack(res, current, open + 1, close, max);
            current.pop_back();
        }
        if (close < open) {
            current += ')';
            backtrack(res, current, open, close + 1, max);
            current.pop_back();
        }
    }
    void parenthesize(vector<string>& v, string s, int index) {
        string res = s;
        for(int i{0};i<s.length();++i) {
            swap(res[i],res[index]);
            if(!search(v,res) && validParentheses(res)) {
                v.push_back(res);
            }    
        }


    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string current = "";
        backtrack(res, current, 0, 0, n);
        return res;
    }
};


//n = 1
// ()


//n = 2
// ()()
// (())


//n = 3
// ()()()
// ((()))
// (())()
// ()(())
// (()())
class Solution {
public:
    bool isValid(string s) {
        stack<int> sta{};
        if(s[0] == ')' || s[0] == ']' || s[0] == '}' && sta.empty()) return false;
        for(char& item : s) {
            switch(item) {
                case '(': sta.push(1); break;
                case '[': sta.push(2); break;
                case '{': sta.push(3); break;
                case ')': 
                if(!sta.empty() && sta.top() == 1) {
                    sta.pop();
                }
                else return false;
                break;
                case ']': 
                if(!sta.empty() && sta.top() == 2) {
                    sta.pop();
                }
                else return false;
                break;
                case '}': 
                if(!sta.empty() && sta.top() == 3) {
                    sta.pop();
                }
                else return false;
                break;
            }
        }
        return sta.empty();
    }
};
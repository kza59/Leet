class Solution {
public:
vector<string> v;
bool matcher(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    // Check if sizes are different
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i][0] != v2[i][0]) {
            return false;
        }

        if (v1[i].length() > v2[i].length()) {
            return false;
        }
    }

    return true;
}
vector<string> chars(string s) {
            vector<string> v;
        int a{0},b{0};
    for (int i = 0; i < s.length(); ++i) {
        if (i < s.length() - 1 && s[i] == s[i + 1]) {
            int a = i;
            int b = i + 1;
            while (b < s.length() && s[a] == s[b]) {
                ++b;
            }
            v.push_back(s.substr(a, b - a));
            i = b - 1;  
        } else {
            v.push_back(s.substr(i, 1)); 
        }
    }
    return v;
    }
    bool isLongPressedName(string name, string typed) {
        return matcher(chars(name),chars(typed));
    
    }
    

};
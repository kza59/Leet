class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;
        res = s.substr(0,spaces[0]);
        res += " ";

        for(int i = 0; i < spaces.size()-1;++i) {
            res += s.substr(spaces[i], spaces[i+1]-spaces[i]);
            res += " ";
        }
        res += s.substr(spaces[spaces.size()-1], s.size()-spaces[spaces.size()-1]);
        return res;
    }
};
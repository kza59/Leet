class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,bool> m;
        vector<int> v;
        for(auto& item : nums) {
            if(m[item] == false) {
                v.push_back(item);
                m[item] = true;
            }
        }
        nums = v;
        return v.size();
        
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //if an element only appears once then
        int res = 0;
        for(int i{0};i<nums.size();++i) {
            res = res ^ nums[i];
        }

        return res;
    }
};
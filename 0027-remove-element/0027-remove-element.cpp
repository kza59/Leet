class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        for(int i{0};i<nums.size();++i) {
            if(nums[i] == val) {
                nums[i] = nums[nums.size()-1];
                nums.pop_back();
                --i;
            }
        }
        return nums.size();
    }
};
//0 0 1 2 2 2 3 4
//0 0 1 4 2 2 3
//0 0 1 4 3 2
//0 0 1 4 3
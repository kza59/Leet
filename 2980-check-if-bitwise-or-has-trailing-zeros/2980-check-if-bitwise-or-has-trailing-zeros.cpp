class Solution {
public:
//0111
//0011
//0110
//0011
    bool hasTrailingZeros(vector<int>& nums) {
        for(int i{0};i<nums.size();++i) { 
            for(int j{0};j<nums.size();++j) {
                if(i != j && ((nums[j] | nums[i]) & 0x00000001) == 0) return true;
            }
        }
        return false;
        
    }
};
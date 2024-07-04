/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    res = [0,0]
    for(i = 0; i < nums.length; ++i) {
        for(j = i + 1; j <nums.length;++j) {
            if(nums[i] + nums[j] == target) {
                res[0] = i;
                res[1] = j;
                
                return res;
            }
        }
    }
    return res;
};
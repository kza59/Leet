/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* res = (int*)malloc(2*sizeof(int));
    *returnSize = 2;
    for(int i = 0;i<numsSize;++i) {
        for(int j = i+1; j < numsSize; ++j) {
            if(nums[i] + nums[j] == target) {
                // printf("TRIGGERED");
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    *returnSize = 0;

    
    return NULL;
}
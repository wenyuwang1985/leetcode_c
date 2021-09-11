//遍历解法中比较快的
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ret = (int *)malloc(2 * sizeof(int));
    int i, j;
    for(i = 0; i < numsSize - 1; ++i){
        for(j = i + 1; j < numsSize; ++j){
            if(nums[i] + nums[j] == target){
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
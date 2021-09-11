//垃圾算法，超时
int containsDuplicate(int* nums, int numsSize){
    int i, j;
    for(i = 0; i < numsSize - 1; ++i){
        for(j = i + 1; j < numsSize; ++j){
            if(nums[i] == nums[j])
                return 0;
        }
    }
    return -1;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *id = (int*)malloc( sizeof(int)*2 );
    for(int i=0; i<numsSize-1; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]+nums[j] == target){
                id[0]=i;
                id[1]=j;
                break;
            }
        }
    }
    return id;
}

int singleNumber(int* nums, int numsSize) {
    printf("buffer len is %d\n",numsSize);
    int i=0,result=0;
    if(numsSize==1){
        return nums[0];
    }
    for(i = 0;i < numsSize; i++){
        printf("%d is start\n",*(nums+i));
        for(int j = 0;j < numsSize; j++){
            if(i==j)continue;
            // printf("    %d:%d\n",nums[i],nums[j]);
            if(nums[i]==nums[j]){
                // printf("    get the commom num\n");
                break;
            }
            else if((i == numsSize-1)&&(j == numsSize-2)){
                    // printf("    the result is:%d",i);
                    return nums[i];
            }else if((i != numsSize-1)&&(j == numsSize-1)&&(nums[i]!=nums[j])){
                    // printf("    no the end,the result is:%d",i);
                    return nums[i];
            }
        }
    }
    printf("check end");
    result = nums[i];
    return result;
}
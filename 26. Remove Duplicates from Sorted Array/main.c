//An O(N) solution which traverses nums keeping track of unique elements and the number of unique elements
int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0)
        return 0;
    int y = nums[0];
    int x = 0;
    for(int i = 1 ; i < numsSize;i++)
    {
        if(nums[i] != y)
        {
            nums[x+1]= nums[i];
            x++;
            y = nums[i];
        }
    }
    return x+1;
    
}

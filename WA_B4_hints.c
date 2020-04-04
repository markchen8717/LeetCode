/*
  A wrong adhoc approach. The attempted solution did not guarantee the correct order of the non-zero elements.
  At the very least, it did manange to shift all zeros to the end of the array.
*/
void swappy(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int max(int a, int b)
{
    if(a >=b)
        return a;
    return b;
}
int is_done(int *nums, int numsSize)
{
    int firstz = -1;
    int z = 0;
    for(int i = 0 ; i < numsSize;i++){
        if(nums[i] == 0){
            z++;
            if(firstz == -1)
                firstz = i;
        }
    }
    if(numsSize - firstz == z)
        return -1;
    else
        return z;
}
void moveZeroes(int* nums, int numsSize){
    if (numsSize < 2)
        return;
    int z = is_done(nums,numsSize);
    int donez = 0;
    int i = 0;

    if(z == -1)
        return;
    while (donez != z && i < numsSize && is_done(nums,numsSize) != -1)
    {
        printf("i:%d\n",i);
        if (nums[i] == 0){
            printf("swapping %d, with %d\n",i,numsSize-donez-1);
            swappy(&nums[i],&nums[max(numsSize-donez-1,0)]);
            printf("swapping %d, with %d\n",i,numsSize-z-donez-1);
            swappy(&nums[i],&nums[max(numsSize-z-donez-1,0)]);
            
            donez++;
            i=0;
        }
        else
            i++;
    }
}


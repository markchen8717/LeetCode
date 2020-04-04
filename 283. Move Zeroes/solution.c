
/*
  We traverse the original array from the beginning while keeping account of two pointers. One of which is where we are 
  currently at, and another one is used to find the next non-zero integer.
*/
void swappy(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void moveZeroes(int* nums, int numsSize){
    int p=0;
    int q = 0;
    while( p < numsSize && q < numsSize)
    {
        if(nums[p] != 0)
        {
            p++;
            q++;
            continue;
        }
        do{
            q++;
            if(q >= numsSize)
                return;
        }while(nums[q] == 0);
        swappy(&nums[p],&nums[q]);
        p++;
    }
}


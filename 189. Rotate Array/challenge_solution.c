/*
  Challenge: Rotate the array without allocating new memory for another array.
  We can traverse the original array and every time we come across an element, we swap it with the element in the corresponding index,
  keeping account of the index to which the element it was swapped with. This step should be repeated untill the swap happens to be where
  we initially started. It is critical to keep a count of the total swaps we have done so we don't undo our work.
*/
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void swappy(int* nums, int numsSize, int k, int i,int *count)
{
    int original_index = i;
    do{
         swap(&nums[i],&nums[(original_index + k)%numsSize]);
        *count = *count + 1;
        original_index = (original_index + k)%numsSize;
        printf("swapped index %d with index %d\n",i,original_index);
    }while(original_index != i);
        
//     swap(&nums[i],&nums[(i+k)%numsSize]);
//     printf("swapped index %d with index %d\n",i,original_index);
//     *count=*count+1;
//     while(original_index != i){
        
//         swap(&nums[i],&nums[(original_index + k)%numsSize]);
//         *count = *count + 1;
        
//         original_index = (original_index + k)%numsSize;
//         printf("swapped index %d with index %d\n",i,original_index);
//     }
}
void rotate(int* nums, int numsSize, int k){
    
    if(k == 0 || numsSize == 0 || k == numsSize)
        return;
    
    int count = 0;
    
    for(int i = 0 ; count < numsSize-1;i++){
        swappy(nums,numsSize,k,i,&count);
        printf("count : %d\n",count);
    }
    
}


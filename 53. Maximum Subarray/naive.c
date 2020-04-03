#include <math.h>
/*
  O(N^2) Brute-force solution that checks every single possible subarray
*/
int maxSubArray(int* nums, int numsSize){
    if(numsSize == 0)
        return 0;
    long long int p [numsSize+1];
    p[0] = 0;
    for(int i = 0 ; i < numsSize ;i++)
    {
        p[i+1] = p[i]+nums[i];
    }
    //printf("xxxx%lldxxxx\n",nums[0]);
    //printf("xxxx%lldxxxx\n",p[1]);
    long long int s = -1*pow(2,32);
    for (int i = 0 ; i < numsSize;i++)
    {
        for(int j = i;j<numsSize;j++)
        {
             //printf("xxxx%lldxxxx\n",s);
            if(p[j+1]-p[i] > s)
                s = p[j+1]-p[i];
        }
    }
     //printf("xxxx%lldxxxx\n",s);
    return s;
}

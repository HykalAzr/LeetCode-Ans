#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize){
    
    int lastB4 = numsSize - 1;
    
    for (int i = numsSize - 1; i >= 0; i--)
    {
        if (i + nums[i] >= lastB4)
        {
            lastB4 = i;
        }
            
    }
    
    return lastB4 == 0;
    
}
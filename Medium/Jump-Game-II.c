#include <stdio.h>

int jump(int* nums, int numsSize){
        
        int jump = 0;
    
        for(int i = 0; i < numsSize - 1;){
            
            if(nums[i] <= 0)
                return -1;
            
            int bestIndex = i + 1;
            
            for(int j = i + 1; j < numsSize && j - i <= nums[i]; j++){
                if(j == numsSize - 1 || nums[bestIndex] < nums[j] + j - bestIndex)
                    bestIndex = j;
            }
            
            i = bestIndex;
            jump++;
            
        }
    
        return jump;
}
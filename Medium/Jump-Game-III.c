#include<stdio.h>

#include <stdio.h>
#include <stdbool.h>

bool canReach(int* arr, int arrSize, int start){
    
    if(start < 0 || start >= arrSize) 
        return false;
    
    if(arr[start]==0) 
        return true;
        
    int k=arr[start];
    arr[start]+=arrSize;
        
    return canReach(arr, arrSize, start+k) || canReach(arr, arrSize, start-k);

}
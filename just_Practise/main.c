#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) {
        for(int i=0; i<numsSize; i++){
            int val=nums[i];
            for(int k=i; k<numsSize; k++){
                if(nums[k]==val || nums[k-1]==nums[k]){
                    int j=k;
                    while(j<numsSize-1){
                          nums[j]=nums[j+1];
                          j++;
                    }
                    numsSize--;
                }
            }
        }

    for(int i=0; i<numsSize; i++){
        printf("%d ",nums[i]);
    }
    return numsSize;
}

int main(){
    int nums[]={0,0,1,1,1,2,2,3,3,4},m=10;
    int x=removeDuplicates(&nums,m);
    printf("\n\n%d",x);
}

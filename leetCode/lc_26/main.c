#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    int j=0;
    for(int i=1; i<numsSize; i++){
        if(nums[j]!=nums[i]){
            j++;
            nums[j]=nums[i];
        }
    }
    return j+1;

}

int main()
{
    int a[3]={1,1,2},n=3;
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
        printf("\n");
    int s=removeDuplicates(&a,n);
    for(int i=0; i<s; i++)
        printf("%d ",a[i]);
    return 0;
}

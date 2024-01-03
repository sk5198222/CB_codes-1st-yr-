#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *arr=(int*)calloc(2,8);
    *arr=5;
    *(arr+1)=10;
    printf("arr[0]: %d\narr[1]: %d\n",*arr,*(arr+1));
    free(arr);
    return 0;
}

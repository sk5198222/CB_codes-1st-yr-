#include<stdio.h>
int main() {
    int size,i,*arr;
    printf("Enter the array size: ");
    scanf("%d",&size);
    arr=(int *)calloc(5,20);
    printf("\nEnter the %d elements:\n",size);
    for(i=0; i<size; i++) {
        scanf("%d",(arr+i));
    }
    printf("\nEntered elements are:\n");
    for(i=0; i<size; i++) {
        printf("%d\n",*(arr+i));
    }
    free(arr);
    return 456;
}

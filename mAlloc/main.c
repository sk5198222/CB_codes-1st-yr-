#include<stdio.h>
int main() {
    int size,*ptr,i;
    printf("Enter the array size: ");
    scanf("%d",&size);
    ptr=(int *)malloc(20);
    printf("\nEnter the array elements:\n");
    for(i=0; i<size; i++) {
        scanf("%d",(ptr+i));
    }
    printf("\nEntered elements are:\n");
    for(i=0; i<size; i++) {
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
}

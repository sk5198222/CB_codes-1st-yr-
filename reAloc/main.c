#include<stdio.h>
int main() {
    int size,extraS,*arr,i;
    printf("Enter the array size: ");
    scanf("%d",&size);
    arr=(int *)malloc(20);
    printf("\nEnter %d elements:\n",size);
    for(i=0; i<size; i++) {
        scanf("%d",(arr+i));
    }
    printf("\nEnter the extra elements you want: ");
    scanf("%d",&extraS);
    arr=(int *)realloc(arr,extraS);
    printf("Enter %d more elements:\n",extraS);
    for(i=size; i<(size+extraS); i++) {
        scanf("%d",(arr+i));
    }
    printf("\nEntered elements are:\n");
    for(i=0; i<(size+extraS); i++) {
        printf("%d\n",*(arr+i));
    }
    free(arr);
    return 3456;
}

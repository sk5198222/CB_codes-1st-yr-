#include<stdio.h>
int main() {
    int *a,*i,size,resize;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    a=(int *)calloc(5,24);
    i=(int *)malloc(4);
    for(*i=0; *i<size; (*i)++)
        scanf("%d",(a+(*i)));
    printf("Entered elements are:\n");
    for(*i=0; *i<size; (*i)++)
        printf("%d\n",*(a+(*i)));
    printf("\nHow many extra element you want to enter: ");
    scanf("%d",&resize);
    a=(int *)realloc(a,resize);
    printf("Enter %d more elements:\n",resize);
    for(*i=size; *i<(size+resize); (*i)++)
        scanf("%d",(a+(*i)));
    printf("\nEntered elements are:\n");
    for(*i=0; *i<(size+resize); (*i)++)
        printf("%d\n",*(a+(*i)));
    free(a);
    free(i);
}

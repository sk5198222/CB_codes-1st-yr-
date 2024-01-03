#include<stdio.h>
#include<stdlib.h>
void mAllocInt(int*);
int main()
{
    int *ptrMAlloc;
    mAllocInt(ptrMAlloc);
    return 56;
}
void mAllocInt(int *ptrInt)
{
    int size,extra,*i=(int *)calloc(1,4);
    printf("How many numbers you want to enter: ");
    scanf("%d",&size);
    ptrInt=(int *)malloc(size*4);
    printf("\nEnter %d numbers:\n",size);
    for(*i=0; *i<size; (*i)++)
        scanf("%d",ptrInt+*(i));
    printf("\nYou have entered:\n");
    for(*i=0; *i<size; (*i)++)
        printf("%d\n",*(ptrInt+*(i)));
    printf("\nHow many extra numbers you want to enter: ");
    scanf("%d",&extra);
    ptrInt=(int *)realloc(ptrInt,extra*sizeof(int));
    printf("Enter %d more numbers:\n",extra);
    for(; *i<(size+extra); (*i)++)
        scanf("%d",ptrInt+*(i));
    printf("After inserting new elements:\n");
    for(*i=0; *i<(size+extra); (*i)++)
        printf("%d\n",*(ptrInt+*(i)));
    free(i);
    free(ptrInt);
}

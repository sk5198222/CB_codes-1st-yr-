#include<stdio.h>
void arrayByIndex(int *a[5]);
int main()
{
    int a[5];
    arrayByIndex(&a);
    return 456;
}
void arrayByIndex(int *a[5])
{
    printf("Enter the 5 elements:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",(a+i));
    }
    printf("\nEntered elements are:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\n",*(a+i));
    }
}

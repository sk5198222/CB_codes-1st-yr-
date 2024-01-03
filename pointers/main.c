#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],size,i;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(a+i));
    printf("Entered array elements are:\n");
    for(i=0; i<size; i++)
        printf("%d\n",*(a+i));
    return 0;
}

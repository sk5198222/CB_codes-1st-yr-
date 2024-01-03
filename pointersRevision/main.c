#include<stdio.h>
int main()
{
    int a[10],size,i,j,temp;
    printf("How many elements do you want: ");
    scanf("%d",size);
    printf("Enter %d elements:\n",size);
    for(*(i)=0; *(i)<size; *(i)++) {
        scanf("%d",(a+i));
    }
    for(*i=0; *i<size-1; (*i)++) {
        for(*j=0; *j<(size-(*i)-1); (*j)++) {
            if(*(a+j)>*(a+*(j+1))) {
               temp=(*a+i);
               (*a+i)=(*a+(*j+1));
               (*a+(*j+1))=temp;
            }
        }
    }
    printf("After sorting, the array elements are:\n");
    for(*i=0; *i<size; (*i)++) {
        printf("%d\n",(*a+i));
    }
    return 0;
}

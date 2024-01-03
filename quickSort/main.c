#include <stdio.h>
#include <stdlib.h>
int partition(int a[],int lb,int ub){
    int pivot=a[lb];
    int si=lb,ei=ub;
    while(si<ei){
        while(a[si]<=pivot)
            si++;
        while(a[ei]>pivot)
            ei--;
        if(si<ei)
            swap(&a[si],&a[ei]);
    }
    swap(&a[lb],&a[ei]);
    return ei;
}
void swap(int *v1,int *v2){
    int temp=*v1;
    *v1=*v2;
    *v2=temp;
}
void qS(int a[],int lb,int ub){
    if(lb<ub){
        int loc=partition(a,lb,ub);
        qS(a,lb,loc-1);
        qS(a,loc+1,ub);
    }
}
void sortedArray(int a[],int ub){
    printf("Sorted array:\n");
    for(int i=0; i<=ub; i++)
        printf("%d\n",a[i]);
}
int main()
{
    int size,a[10];
    printf("Enter the array size: ") ;
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(int i=0; i<size; i++)
        scanf("%d",(a+i));

    int lb=0,ub=3;
    qS(a,lb,size-1);
    sortedArray(a,size-1);
    return 0;
}

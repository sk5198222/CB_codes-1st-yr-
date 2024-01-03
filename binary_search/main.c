#include <stdio.h>
int main()
{
    int a[5],size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("enter %d elements:\n",size);
    for(int i=0; i<size; i++)
        scanf("%d",&a[i]);
    printf("Enter an element to search: ");
    int ele;
    scanf("%d",&ele);
    int loc=bSearch(a,0,size-1,ele);
    if(loc==-1)
        printf("Element not found");
    else
        printf("element found at index %d\n",loc);
    return 0;
}
int bSearch(int a[], int l, int r, int ele){

    while(l<=r){
        int mid=(l+r)/2;
        if(ele==a[mid])
            return mid;
        else if(ele<a[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;
}

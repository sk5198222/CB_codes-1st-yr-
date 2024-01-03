#include <stdio.h>
int bSearch(int a[],int data,int n){
    int l=0,r=n-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(data==a[mid])
            return mid;
        else if(data<a[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int main()
{
    int a[10],n,ele;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",(a+i));
    printf("Enter an ele to search: ");
    scanf("%d",&ele);
    int found=bSearch(a,ele,n);
    if(found==-1)
        printf("Element %d not found!!!",ele);
    else
        printf("%d found at pos %d.\n",ele,found+1);
    return 1235;
}

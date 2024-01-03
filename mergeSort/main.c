#include <stdio.h>
void mergeSort(int a[],int lb,int ub){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub){
    int i,j,k,b[10];
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k]=a[i];  i++;
        }
        else{
            b[k]=a[j];  j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j]; j++; k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=a[i]; i++; k++;
        }
    }
    for(int s=lb; s<=ub; s++)
        a[s]=b[s];
}


int main()
{
    int a[10],i,size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(a+i));

    mergeSort(a,0,size-1);
    for(i=0; i<size; i++){
        printf("%d\n",*(a+i));
    }
    return 0;
}

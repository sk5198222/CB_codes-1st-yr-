#include<stdio.h>
int a[10],size,i,j,flag,min;
void getArray(){
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(a+i));
}
void bubbleSort(){
    for(i=0; i<(size-1); i++){
            flag=0;
        for(j=0; j<(size-i-1); j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
            if(flag==0) break;
        }
    }
}
void selectionSort(){
    for(i=0; i<size-1; i++){
            min=i;
        for(j=i+1; j<size; j++){
            if(a[min]>a[j])
                min=j;
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
void sortedArray(){
    printf("Sorted array is:\n");
    for(i=0; i<size; i++)
        printf("%d\n",*(a+i));
}
int main(){
    getArray();
    selectionSort();
    sortedArray();
    return 2345;
}

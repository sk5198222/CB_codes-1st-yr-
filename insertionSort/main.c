#include <stdio.h>
int a[10],size,i;
void getArray(){
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(a+i));
}
void insSort(){
    int j;
    for(i=0; i<size; i++){
        int temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
void sortedArray(){
    printf("Sorted array:\n");
    for(i=0; i<size; i++)
        printf("%d\n",a[i]);
}
int main()
{
    getArray();
    insSort();
    sortedArray();
    return 1235;
}

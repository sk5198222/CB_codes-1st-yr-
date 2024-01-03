/*#include <stdio.h>
int a[10],size,i;
void setArray(){
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(a+i));
}
void selectionSort(){
    int j;
    for(i=0; i<size-1; i++){
        int min=i;
        for(j=i+1; j<size; j++){
            if(a[min]>a[j])
                min=j;
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
void getArray(){
    printf("Sorted array:\n");
    for(i=0; i<size; i++)
        printf("%d\n",a[i]);
}
int main()
{
    setArray();
    selectionSort();
    getArray();
    return 0;
}
*/
#include<stdio.h>
int a[10],size,i;
void setArray(){
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(a+i));
}
void insertionSort(){
    int j;
    for(i=1; i<size; i++){
        int temp=a[i];
        j=i-1;
        while(j>=0 && temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
void getArray(){
    printf("Sorted array:\n");
    for(i=0; i<size; i++)
        printf("%d\n",a[i]);
}
int main(){
    setArray();
    insertionSort();
    getArray();
    return 1235;
}

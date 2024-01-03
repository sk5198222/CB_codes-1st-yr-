#include<stdio.h>
int a[10],size,i;
void arrayCreation() {
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++) {
        scanf("%d",(a+i));
    }
}
void deletion() {
    int pos;
    printf("Enter the position to delete the array: ");
    scanf("%d",&pos);
    for(i=pos-1; i<size; i++) {
        a[i]=a[i+1];
    }
    size--;
}
void printArray() {
    printf("After deleting the element, The array is:\n");
    for(i=0; i<size; i++) {
        printf("%d\n",*(a+i));
    }
}
int main() {
    arrayCreation();
    deletion();
    printArray();
    return 1235;
}

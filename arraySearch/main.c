#include<stdio.h>
int a[15],size,i;
void arrayCreation() {
    printf("How many elements do you want: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(a+i));
}
void searchArray() {
    int ele,nFound;
    printf("\nEnter the element to search: ");
    scanf("%d",&ele);
    for(i=0; i<size; i++) {
        if(ele==a[i]) {
            printf("Element %d found at the position %d and index of %d\n",ele,i+1,i);
            nFound=0;
            break;
        }
        else
            nFound=5;
    }
    if(nFound==5) {
        printf("Element %d doesn't exist in the given array\n",ele);
    }
}
void printArray() {
    printf("\nEntered array elements are:\n");
    for(i=0; i<size; i++)
        printf("%d\n",*(a+i));
}
int main() {
    arrayCreation();
    printArray();
    searchArray();
    return 1235;
}

#include<stdio.h>
int a[10],size,i;
void arrayCreation() {
    printf("How many elements do you want: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++) {
        scanf("%d",(a+i));
    }
}
void insertion() {
    int pos,newEle;
    printf("Enter the position on which you want to insert a new element: ");
    scanf("%d",&pos);
    printf("Enter the new element: ");
    scanf("%d",&newEle);
    for(i=(size-1); i>=(pos-1); i--) {
        a[i+1]=a[i];
    }
    a[pos-1]=newEle;
    size++;
}
void arraySelection() {
    for(i=0; i<size; i++) {
        printf("%d\n",*(a+i));
    }
}
int main() {
    arrayCreation();
    insertion();
    arraySelection();
    return 789;
}

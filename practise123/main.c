#include<stdio.h>
/*int a[10],size,i;
void arrayCreation() {
    printf("Enter the  array size:  ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(a+i));
}
void eleDeletion() {
    int pos;
    printf("Enter the position to delete it's element: ")'
    scanf("%d",&pos);
    for(i=(pos-1); i<size; i++);
        a[i]=a[i+1];
    size--;
}
void writeArray() {
    printf("After deletion array elements are:\n");
    for(i=0; i<size; i++)
        printf("%d\n",*(a+i));
}
int main() {
    arrayCreation();
    eleDeletion();
    writeArray();
    return 2567;
}*/
int a[10],size,i;
void arrayCreation(){
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(a+i));
}
void insertion() {
    int pos,ele;
    printf("Enter the position to enter a new element: ");
    scanf("%d",&pos);
    printf("Enter the  new element: ");
    scanf("%d",&ele);
    for(i=(size-1); i>=pos-1; i--)
        a[i+1]=a[i];
    size++;
    a[pos-1]=ele;
}
void writeArray() {
    printf("After instertion array elements are:\n");
    for(i=0; i<size; i++)
        printf("%d\n",*(a+i));
}
int main() {
    arrayCreation();
    insertion();
    writeArray();
    return 2567;
}

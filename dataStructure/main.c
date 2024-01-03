#include<stdio.h>
#include<stdlib.h>
int a[10],b[10],c[20],size,pos,i;
void arrayCreation(){
    printf("\nHow many elements do you want: ");
    scanf("%d",&size);
    printf("\nEnter %d elements\n",size);
    for(i=0; i<size; i++) {
        scanf("%d",(a+i));
    }
    printf("\nArray has been Created, to print the array press 3.");
}
void elementDeletion() {
    printf("\nEnter the position to delete it's element: ");
    scanf("%d",&pos);
    if(pos>size){
        printf("\nDeletion is not possibe!!! out of array size.\n");
    }
    else{
        for(i=pos-1; i<size; i++) {
            a[i]=a[i+1];
        }
        size--;
    }
    printf("\nGiven element has been deleted, to print the array press 3.");
}
void arraySelection() {
    for(i=0; i<size; i++) {
        printf("%d\n",*(a+i));
    }
}
void elementUpdate() {
    int newEle;
    printf("\nWhich element you want to update, Enter it's position: ");
    scanf("%d",&pos);
    printf("\nEnter a new element to insert it into the position %d\n",pos);
    scanf("%d",&newEle);
    a[pos-1]=newEle;
    printf("\nGiven element has been Updated, to print the array press 3.");
}
void arraySearch() {
    int search,found=0;
    printf("\nEnter the element to search it: ");
    scanf("%d",&search);
    for(i=0; i<size; i++) {
        if(a[i]==search) {
            found=1;
            printf("\nElement %d found at the position %d and at the index of %d.\n",search,i+1,i);
        }
    }
    if(found==0)
        printf("\nElement %d does not exist.\n");
}
void elementInsertion() {
    int newEle;
    printf("\nEnter the position on which you want to enter the new element: ");
    scanf("%d",&pos);
    printf("\nEnter the element to insert on %d position: ",pos);
    scanf("%d",&newEle);
    for(i=size-1; i>=pos-1; i--) {
        a[i+1]=a[i];
    }
    a[pos-1]=newEle;
    size++;
    printf("\nNew Element has been Inserted, to print the array press 3.");
}
void arrayDeletion() {
    for(i=0; i<size; i++) {
        a[i]=0;
    }
    printf("\nArray has been Deleted.");
}
void arraySort() {
    for(i=0; i<size-1; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(a[j]>a[j+1]) {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nArray has been Sorted, to print the array press 3.");
}
void arrayMerge() {
    int j,size2;
    printf("Enter the 1st array size: ");
    scanf("%d",&size);
    printf("Enter %d element into the 1st array\n",size);
    for(i=0; i<size; i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the 2nd array size: ");
    scanf("%d",&size2);
    printf("Enter %d element into the 1st array\n",size2);
    for(i=0; i<size2; i++) {
        scanf("%d",&b[i]);
    }
    for(i=0; i<size; i++) {
        c[i]=a[i];
    }
    for(i=0,j=size; i<size&&j<(size+size2); i++,j++) {
        c[j]=b[i];
    }
    printf("Merged array elements are:\n");
    for(i=0; i<(size+size2); i++) {
        printf("%d\n",c[i]);
    }
}
int main()
{
    int search,option;
    while(1){
        printf("\n1.Array Creation\n2.Array Element Deletion\n3.Array Select\n4.Array element Update\n5.Array Search\n6.Array Element Insertion\n7.Array Deletion\n8.Array Sort\n9.Array Merging\n10.Exit\nChoose any one option: ");
        scanf("%d",&option);

        switch(option){
            case 1: arrayCreation(); break;

            case 2: elementDeletion(); break;

            case 3: arraySelection(); break;

            case 4: elementUpdate(); break;

            case 5: arraySearch(); break;

            case 6: elementInsertion(); break;

            case 7: arrayDeletion(); break;

            case 8: arraySort(); break;

            case 9: arrayMerge(); break;

            case 10: exit(1235);

            default: printf("\nInvalid option!!!\nPlease select anyone between 1-10 only.\n");
        }
    }
    return 1235;
}

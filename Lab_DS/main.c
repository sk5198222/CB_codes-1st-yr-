#include<stdio.h>
/*#include<string.h>
char names[100][20],temp[100];
int i,n,j;
void readNames(){
    printf("Enter the number of cities you want to enter: ");
    scanf("%d",&n);
    getchar();
    printf("Enter %d cities:\n",n);
    for(i=0; i<n; i++){
        gets(names[i]);
    }
}
void sortNames(){
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
}
void sortedNames(){
    printf("\nSorted names of the cities:\n");
    for(i=0; i<n; i++)
        puts(names[i]);
}
int main(){
    readNames();
    sortNames();
    sortedNames();
    return 1235;
}*/

int a[20],size,i;
void setArray(){
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
}
void getArray(){
    printf("Array elements are:\n");
    for(i=0; i<size; i++){
        printf("%d\n",a[i]);
    }
}
void search(){
    int ele;
    printf("Enter an element to search: ");
    scanf("%d",&ele);
    for(i=0; i<size;  i++){
        if(a[i]==ele){
            printf("Element %d found at position %d.\n",ele,i+1); return;
        }
    }
    printf("Element %d does not found.\n",ele);
}
int main(){
    setArray();
    getArray();
    search();
    return 1235;
}


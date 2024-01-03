#include<stdio.h>
/*int a[10],size,i,j;
void setArray(){
    printf("Enter the array size: ");
    scanf("%d",&size);
    for(int i=0; i<size; i++)
        scanf("%d",(a+i));
}
void bubbleSort(){
    int flag;
    for(i=0; i<size-1; i++){
            flag=0;
        for(j=0; j<size-i-1; j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=5;
            }
        }
        if(flag==0) return;
    }
}
void selectionSort(){
    int min;
    for(i=0; i<size-1; i++){
        min=i;
        for(j=i+1; j<size; j++){
            if(a[min]>a[j])
                min=j;
        }
        if(min!=i){
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}
void insertionSort(){
    int temp;
    for(i=1; i<size; i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
void  getArray(){
    for(i=0; i<size; i++)
        printf("%d\n",a[i]);
}
int main(){
    setArray();
    insertionSort();
    getArray();
}
*/
/*#include<string.h>
char str[100][20],i,j,n=0;
void setNames(){
    printf("no. of cities: ");
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
        gets(str[i]);
}
void sortNames(){
    char temp[100];
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
}
void getNames(){
    for(i=0; i<n; i++)
        puts(str[i]);
}
int main(){
    setNames();
    sortNames();
    getNames();
}
*/
#define S 3
int s[S],rear=-1,front=-1;
void push(){
    if(rear==S-1)
        printf("Full");
    else{
        rear++;
        printf("ele: ");
        scanf("%d",&s[rear]);
        if(front==-1)
            front=0;
    }
}
void pop(){
    if(front==-1)
        printf("empty");
    else if(rear==front)
        rear=front=-1;
    else
        front++;
}
void display(){
    if(rear==-1)
        printf("empty");
    else{
        int i;
        for(i=front; i<=rear; i++)
            printf("%d\n",s[i]);
    }
}
int main(){
    int c;
    while(1){
        printf("Choose: ");
        scanf("%d",&c);
        switch(c){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 0: return 456;
        }
    }
}

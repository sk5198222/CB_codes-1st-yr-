#include <stdio.h>
#define size 3
int a[size],front=-1,rear=-1;
void enqueue(){
    if(rear==(size-1))
        printf("full");
    else {
        rear++;
        printf("ele: ");
        scanf("%d",&a[rear]);
        if(front==-1)
            front=0;
    }
}
void dequeue(){
    if(front==-1)
        printf("empty");
    else if(rear==front){
        printf("%d removed",a[front]);
        front=rear=-1;
    }
    else{
        printf("%d removed",a[front]);
        front++;
    }
}
void display(){
    int i;
    if(rear==-1)
        printf("empty");
    else{
        for(i=front; i<=rear; i++)
            printf("%d\n",a[i]);
    }
}
int main()
{
    int choice;
    while(1){
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 0: return 1235;
        }
    }

}

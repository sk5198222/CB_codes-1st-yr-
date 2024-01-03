#include <stdio.h>
#define S 3
int q[S],rear=-1,front=-1;
void enqueue(){
    if(front==(rear+1)%S)
        printf("Queue is full!!!");
    else{
        rear=(rear+1)%S;
        printf("Enter an element to insert: ");
        scanf("%d",&q[rear]);
        printf("%d inserted\n",q[rear]);
        if(front==-1)
            front=0;
    }
}
void dequeue(){
    if(front==-1)
        printf("Queue is empty!!!");
    else if(front==rear){
        printf("%d has been dequeued\n",q[front]);
        front=rear=-1;
    }
    else{
        printf("%d has been dequeued\n",q[front]);
        front=(front+1)%S;
    }
}
void display(){
    if(rear==-1)
        printf("Queue is empty!!!");
    else{
        int i=front;
         while(i!=rear)
        {
            printf("%d\n",q[i]);
            i=(i+1)%S;
        }
        printf("%d\n",q[i]);
    }
}
int main()
{
    int option;
    printf("1.Enqueue\n2.Dequeue\n3.Display\n0.Exit\n");
    while(1){
        printf("Choose an option: ");
        scanf("%d",&option);
        switch(option){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 0: return 1235;
            default: printf("Invalid option!!!");
        }
    }
    return 0;
}

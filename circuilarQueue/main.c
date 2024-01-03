#include<stdio.h>
#define S 5
int q[S],rear=-1,front=-1;
void enqueue(){
    if(front==(rear+1)%S)
        printf("Queue is full!!!");
    else {
        rear=(rear+1)%S;
        printf("Enter an element: ");
        scanf("%d",&q[rear]);
        if(front==-1)
            front=0;
    }
}
void dequeue() {
    if(front==-1)
        printf("Queue is empty!!!");
    else if(front==rear){
        printf("%d has been dequeued.",q[front]);
        front=rear=-1;
    }
    else {
        printf("%d has been dequeued.",q[front]);
        front=(front+1)%S;
    }
}
void display(){
    printf("Queue is:\n");
    for(int i=front; i<=rear; i++)
        printf("%d\t",q[i]);
    if(front>rear){
        for(int i=front; i<S; i++)
            printf("%d\t",q[i]);
        for(int i=0; i<=rear; i++)
            printf("%d\t",q[i]);
    }
}
int main(){
    int option;
    while(1){
        printf("\n1.enqueue\n2.dequeue\n3.display\n0.exit\nEnter an option: ");
        scanf("%d",&option);
        switch(option){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 0: return 1235;
            default: printf("Enter valid choice!!!");
        }
    }

}

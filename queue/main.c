#include<stdio.h>
#include<stdlib.h>
#define size 2
int q[size],rear=-1,front=-1;
void enqueue() {
    int e;
    if(rear==(size-1))
        printf("Queue is full, can't insert anymore elements.\n");
    else if(rear==-1) {
        rear=front=0;
        printf("Enter an element to insert: ");
        scanf("%d",&e);
        q[rear]=e;
        printf("%d has been inserted.\n",q[rear]);
    }
    else {
        rear++;
        printf("Enter an element to insert: ");
        scanf("%d",&e);
        q[rear]=e;
        printf("%d has been inserted.\n",q[rear]);
    }
}
void dequeue(){
    if(front==-1)
        printf("Queue is empty, nothing to delete.\n");
    else if(rear==front) {
        printf("%d has been removed.\n",q[front]);
        rear=front=-1;
    }
    else{
        printf("%d has been removed.\n",q[front]);
        front++;
    }
}
void display() {
    printf("Queue is:\n");
    for(int i=front; i<=rear; i++)
        printf("%d\t",q[i]);
}
int main() {
    int option,ele;
    while(1){
        printf("\n1.enqueue\n2.dequeue\n3.display\n0.exit\nChoose an option: ");
        scanf("%d",&option);
        switch (option) {
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        case 3: display(); break;
        case 0: return 1235;
        default: printf("Choose a correct option!!!\n");
        }
    }
}

/*#include <stdio.h>
#include <stdlib.h>
#define S 3
int q[S],front=-1,rear=-1;
void enqueue(){
    if(front==(rear+1)%S)
        printf("Queue is Full!!!\n");
    else{
        rear=(rear+1)%S;
        printf("Enter an element: ");
        scanf("%d",&q[rear]);
        if(front==-1)
            front=0;
    }
}
void dequeue(){
    if(front==-1)
        printf("Queue is empty!!!\n");
    else if(front==rear){
        printf("%d has been deleted\n",q[front]);
        front=rear=-1;
    }
    else{
        printf("%d has been deleted\n",q[front]);
        front=(front+1)%S;
    }
}
void display(){
    if(front==-1)
        printf("Queue is empty!!!\n");
    else{
        int i=front;
        while(i!=rear){
            printf("%d\n",q[i]);
            i=(i+1)%S;
        }printf("%d\n",q[i]);
    }
}
int main()
{
    int choice;
    printf("1.Enqueue\n2.Dequeue\n3.Display\n0.exit\n");
    while(1){
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 0: return 1235;
            default: printf("Invalid choice\n"); break;
        }
    }
}*/

/*#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=0,*ptr,*nNode;

void insertion(){
    nNode=(struct node*)malloc(sizeof(struct node));

    printf("Enter a value: ");
    scanf("%d",&nNode->data);
    nNode->next=0;

    if(head==0){
        head=ptr=nNode;
    }
    else{
        ptr->next=nNode;
        ptr=nNode;
    }
}
void display(){
    if(head==0){
        printf("Linked list is empty!!!!!!!!!!!"); return;
    }

    ptr=head;
    while(ptr!=0){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

void deletion(){
    if(head==0)
        printf("Nothing to delete!!!\n");
    else{
        struct node *prevNode;
        ptr=head;
        while(ptr->next!=0){
            prevNode=ptr;
            ptr=ptr->next;
        }
        printf("%d has been deleted\n",ptr->data);
        if(ptr==head){
            head=0;
        }
        else{
            prevNode->next=0;
        }
        free(ptr);
    }
}

int main(){
    int choice;
    printf("\n1.Create node\n2.Deletion\n3.Display\n0.exit\n");
    while(1){
        printf("Choose an option: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insertion(); break;
            case 2: deletion(); break;
            case 3: display(); break;
            case 0: return 0;
            default: printf("Please choose a valid option!!!!\n"); break;
        }
    }
}*/
#include<stdio.h>
struct person{
    char name[30];
    int age;
    char gender[10];
}s1;
struct person *ptrS1=&s1;
int main()
{
    printf("Enter the name\n:");
    scanf("%s",&ptrS1->name);
    printf("Enter the age\n:");
    scanf("%d",&ptrS1->age);
    printf("Enter the gender\n:");
    scanf("%s",&ptrS1->gender);
    printf("Name:%s",ptrS1->name);
    printf("Age:%d",ptrS1->age);
    printf("Gender:%s",ptrS1->gender);
}


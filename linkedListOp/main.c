#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data[20];
    struct node *next;
};
struct node *nNode,*head=0,*temp;
int choice,count=0;

void createNode(){
        nNode=(struct node*)malloc(sizeof(struct node));
        count++;
        printf("Enter the data: ");
        gets(nNode->data);
        nNode->next=0;

        if(head==0){
            head=temp=nNode;
        }
        else{
            temp->next=nNode;
            temp=nNode;
        }
}

void display(){
    temp=head;
    printf("\nPresent data:\n");
    while(temp!=0){
        puts(temp->data);
        temp=temp->next;
    }
}

void insertAtBeg(){
    nNode=(struct node*)malloc(sizeof(struct node));
    count++;
    printf("\nEnter the data: ");
    gets(nNode->data);
    nNode->next=head;
    head=temp=nNode;
}
void insertAtEnd(){
    nNode=(struct node*)malloc(sizeof(struct node));
    count++;
    printf("\nEnter the data: ");
    gets(nNode->data);
    nNode->next=0;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=nNode;
    temp=head;
}

void insertAtPos(){
    int pos,i=1;
    printf("\nEnter the pos on which you want to insert the data: ");
    scanf("%d",&pos);
    getchar();
    if(pos<=0 || pos>count)
        printf("\nInvalid Position!!!\n");
    else{
        nNode=(struct node*)malloc(sizeof(struct node));
        while(i<pos){
            temp=temp->next;
        }
        printf("\nEnter the data: ");
        gets(nNode->data);
        nNode->next=temp->next;
        temp->next=nNode;
        temp=head;
    }
}

void searching(){

}

int main(){
    printf("Created a node.\n");
    do{
        createNode();
        printf("\nIf you want an another node press 1: ");
        scanf("%d",&choice);
        getchar();
    }while(choice==1);
    temp=head;
    do{
        printf("\nPress 1 to insert a new node in the beginning\nPress 2 to insert a new node at the end\nPress 3 to insert a new node at given pos\nPress 4 to Display the data\nOr press 0 to exit\n : ");
        scanf("%d",&choice);
        getchar();

        switch(choice){
            case 1: insertAtBeg(); break;
            case 2: insertAtEnd(); break;
            case 3: insertAtPos(); break;
            case 4: display(); break;
            case 0: return 1235;
            default: printf("\nInvalid option!!!!\n"); break;
        }
    }while(1);
}


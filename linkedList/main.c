#include<stdio.h>
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

        if(ptr==head) {
            head=0;
        }
        else {
            prevNode->next=0;
        }
        free(ptr);
    }
}

void search()
{
    int searchEle;
    printf("Enter the Searching element: \n");
    scanf("%d",&searchEle);

    ptr=head;
    while(ptr!=0)
    {
        if(searchEle==ptr->data){
            printf("%d found found in the list\n",searchEle); return;
        }
        ptr=ptr->next;
    }

    printf("%d is not found\n",searchEle);
}

int main(){
    int choice;
    printf("\n1.Create node\n2.Display\n3.Deletion\n0.exit\n");
    while(1){
        printf("Choose an option: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insertion(); break;
            case 2: display(); break;
            case 3: search(); break;
            case 0: return 0;
            default: printf("Please choose a valid option!!!!\n"); break;
        }
    }
}

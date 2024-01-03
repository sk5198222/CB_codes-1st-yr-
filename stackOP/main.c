#include<stdio.h>
int a[10],top=-1;
void push() {
    if(top==9)
        printf("Stack is full, can't push any element.\n");
    else {
        top++;
        printf("Enter a element: ");
        scanf("%d",&a[top]);
        printf("%d inserted.\n\n",a[top]);
    }
}
void pop() {
    if(top==-1)
        printf("Stack is empty, can't pop any element.\n");
    else {
        printf("Element %d is popped out.\n",a[top]);
        top--;
    }
}
void peek() {
    if(top==-1)
        printf("Stack is empty, nothing to peek.\n");
    else
        printf("\nElement %d is in the top.\n",a[top]);
}
void display() {
    if(top==-1)
        printf("\nStack is empty, nothing to dispay.\n");
    else {
        printf("\nStack elements are:\n");
        for(int i=top; i>=0; i--)
            printf("%d\n",a[i]);
    }
}
int main() {
    int option;
    while(1) {
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n0.exit\nChoose an option: ");
        scanf("%d",&option);
        switch (option) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 0: return 1235;
            default: printf("Invalid option elected,\nPlease choose a correct option\n.");
        }
    }
}

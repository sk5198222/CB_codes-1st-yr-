#include <stdio.h>
#include<string.h>
int stack[30],pos=-1,char exp[30];;
void push(int value){
    if(pos==(strlen(exp)-1)) {
        printf("Stack is full.");
    }
    else {
        pos++;
        stack[pos]=value;
    }
}
void pop() {
    if(pos==-1) {
        printf("Stack is empty.");
    }
    else {
        printf("%d has been popped out.\n",stack[pos]);
        pos--;
    }
}
i evaluate() {
    printf("Enter the expression: ");
    gets(exp);
    for(int i=0; i<strlen(exp); i++) {
        if(exp[i]>='0' && exp[i]<'10' || exp[i]>=65 && exp[i]<91) {
            pos++;
            int ele=(int *)exp[i];
            push(ele);
        }
        else {
            int ele1=stack[pos];
            int ele2=stack[pos-1];
            switch(exp[i]) {
                case '+' :  push(ele2+ele1); break;
                case '-' :  push(ele2-ele1); break;
                case '*' :  push(ele2*ele1); break;
                case '/' :  push(ele2/ele1); break;
            }
        }



    }
}
int main()
{

    return 0;
}

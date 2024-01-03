#include<stdio.h>
void pointer(int,int*);
void pointer2Pointer(int,int**);
void pointer2DoublePointer(int,int***);
int main()
{
    int a=555,*sP=&a,**dP=&sP,***tP=&dP;
    //printf("Value of A:\nUsing variable a: %d\tAdress of a: %u\n\n",a,&a);
    //pointer(a,&a);
    //pointer2Pointer(a,&sP);
   // pointer2DoublePointer(a,&dP);
   printf("Address of a: %u\n",&a);
   printf("Address under single P: %u\nAddress of single P: %u\n\n",sP,&sP);
   printf("Address under double P: %u\nAddress of double P: %u\n\n",dP,&dP);
   printf("Address under triple P: %u\nAddress of triple P: %u\n\n",tP,&tP);
    return 456;
}
void pointer(int a,int *sP)
{
    (*sP)+=10;
    printf("Value of A:\nUsing Pointer(*): %d\nAddress under Pointer: %u\nAddress of pointer variable(*sP): %u\n\n",*sP,sP,&sP);
}
void pointer2Pointer(int a,int** dP)
{
    (**dP)+=10;
    printf("Value of A:\nUsing Double Pointer(**): %d\nAddress under Double Pointer: %u\nAddress of Double pointer variable(**dP): %u\n\n",**dP,dP,&dP);
}
void pointer2DoublePointer(int a,int*** tP)
{
    (***tP)+=10;
    printf("Value of A:\nUsing Triple Pointer(***): %d\nAddress under Triple Pointer: %u\nAddress of Triple pointer variable(***tP): %u\n\n",***tP,tP,&tP);
}

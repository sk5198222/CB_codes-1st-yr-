//Basic operations using all types of pointers:(Pointer to variable, Pointer to Pointer, Pointer to double pointer).
#include<stdio.h>
int main()
{
    int a=555,*sP=&a,**dP=&sP,***tP=&dP;
    printf("Value of A:\nUsing variable a: %d\nAddress of a: %u\n\n",a,&a);
    (*sP)+=10;
    printf("Value of A+10:\nUsing pointer variable(*sP): %d\nAddress under Pointer(*sP): %u\nAddress of(*sP): %u\n\n",*sP,sP,&sP);
    (**dP)+=10;
    printf("Value of A+10:\nUsing double pointer(**dP): %d\nAddress under Pointer(**dP): %u\nAddress of(**dP): %u\n\n",**dP,dP,&dP);
    (***tP)+=10;
    printf("Value of A+10:\nUsing triple pointer(***tP): %d\nAddress under Pointer(***tP): %u\nAddress of(***tP): %u\n\n",***tP,tP,&tP);
    printf("A value at the end: %d\n\n\n\n",a);
    return 456;
}

#include<stdio.h>
int main()
{
    printf("When i==3 looping will be stopped\n");
    for(int i=1; i<=5; i++)
    {
        if(i==3)break;
        printf("%d\n",i);
    }
    printf("\nWhen i==3, 'continue' skips that line\n");
    for(int i=1; i<=5; i++)
    {
        if(i==3)continue;
        printf("%d\n",i);
    }
    printf("\nWhen i==3, 'goto' jumps the control to a desired destination\n");
    for(int i=1; i<=5; i++)
    {
        if(i==3)goto birek;
        printf("%d\n",i);
    }
    birek: printf("a\nb\n");
    return 0;
}

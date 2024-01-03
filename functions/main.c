#include <stdio.h>
void sum();
int sub();
int pro(int, int);
void div(int, int);
int main()
{
    int result1,result2;
    sum();
    result1=sub();
    printf("Substraction : %d\n",result1);
    result2=pro(5,5);
    printf("Product : %d\n",result2);
    div(80,8);
    return 0;
}
void sum()
{
    int a=10,b=20;
    printf("Sum : %d\n",a+b);
}
int sub()
{
    int a=50,z=40;
    return a-z;
}
int pro(int a, int y)
{
    return a*y;
}
void div(int a, int d)
{
    printf("Quotient :%d\n",a/d);
}

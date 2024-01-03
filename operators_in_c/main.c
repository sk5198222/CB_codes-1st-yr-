#include<stdio.h>
int main()
{
    int a=10, b=5;
    printf("A: %d\nB: %d\n\n",a,b);

    // Arithmetic Operations :
    printf("Sum: %d\n",a+b);
    printf("Difference: %d\n",a-b);
    printf("Product: %d\n",a*b);
    printf("Quotient: %d\n",a/b);
    printf("remainder: %d\n\n",a%b);

    // Relational Operations :
    printf("a==b: %d\n",a==b);
    printf("a!=b: %d\n",a!=b);
    printf("a<b: %d\n",a<b);
    printf("a>b: %d\n",a>b);
    printf("a<=b: %d\n",a<=b);
    printf("a>=b: %d\n\n",a>=b);

    // Logical Operations :
    printf("a>5 && b<10: %d\n",a>5 && b<10);
    printf("a>5 || b>5: %d\n",a>5 || b>5);
    printf("!a>5 || b>5: %d\n\n",!a>5 || b>5);

    return 56;
}

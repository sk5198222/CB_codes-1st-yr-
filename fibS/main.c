#include <stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("Enter a no to find it's Fib series: ");
    scanf("%d",&n);
    while(n>=1) {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return 0;
}

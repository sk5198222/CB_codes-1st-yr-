#include <stdio.h>
int main()
{
    int a=10,b=50,c=100;
    if(a>b && a>c)
        printf("%d is greater here.\n",a);
    else if(b>c)
        printf("%d is greater here.\n",b);
    else
        printf("%d is greater\n",c);
    return 4567;
}

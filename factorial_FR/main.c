#include <stdio.h>
int fact(int no) {
    if(no==1) return no;
    else return no*fact(no-1);
}
int main()
{
    int num;
    printf("Enter a no. to find it's fact: ");
    scanf("%d",&num);
    printf("Factorial of %d is: %d\n",num,fact(num));
    return 1235;
}

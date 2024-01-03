#include<stdio.h>
void fibS(int a,int b,int n){
    if(n==0)
        return;
    else {
        int c=(a+b);
        printf("%d\n",c);
        fibS(b,c,n-1);
    }
}
int main(){
    int no;
    printf("Enter a number to find it's Fib Series: ");
    scanf("%d",&no);
    printf("Fib Series of %d is:\n0\n1\n",no);
    fibS(0,1,no-2);
}

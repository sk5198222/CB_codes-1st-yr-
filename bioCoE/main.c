#include<stdio.h>
int binomialCoeff(int n, int k){
    int bC=(fact(n)/(fact(k)*fact(n-k)));
}
int fact(int no){
    int f=1,i;
    for(i=1; i<=no; i++)
        f=f*i;
    return f;
}
int main()
{
 int n,k;
 printf("Enter two values to find it's Binomial Coefficient:\n");
 scanf("%d%d",&n,&k);
 printf("Binomial CoEfficient of (%d, %d) is %d ", n, k, binomialCoeff(n, k));
 return 0;
}

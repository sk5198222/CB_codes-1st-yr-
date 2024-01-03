#ifndef MYHF_H_INCLUDED
#define MYHF_H_INCLUDED
void printNosUpto(int n){
    for(int i=1; i<=n; i++)
        printf("%d\n",i);
}
void factorial(int n){
    int fact=1,i;
    for(i=1; i<=n; i++)
        fact=fact*i;
    printf("Factorial of %d is: %d\n",fact);
}
#endif // MYHF_H_INCLUDED

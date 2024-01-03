int fact(int n){
        int fact=1,i;
        for(i=1; i<=n; i++)
            fact=fact*i;
        return fact;
}
void printNos(int n){
    for(int i=1; i<=n; i++)
        printf("%d\n",i);
}

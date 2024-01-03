#include<stdio.h>
#define size 5
int recEle(int *a,int s) {
    if(s==1)
        return a[0];
    else
        return greatest(recEle(a,s-1),a[s-1]);

}
int greatest(int n,int n1) {
    if(n>n1)
        return n;
    else
        return n1;
}
int main() {
    int a[size]={2,5,9,8,7};
    printf("%d\n",recEle(a,size));
    return 1235;
}

#include<stdio.h>
int sum(int no) {
    if(no==1) return no;
    else return no+sum(no-1);
}
int main(){
    int num;
    printf("Enter a number to find it's sum: ");
    scanf("%d",&num);
    printf("Sum of %d is: %d\n",num,sum(num));
    return 1235;
}

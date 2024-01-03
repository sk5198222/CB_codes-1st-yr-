#include <stdio.h>
void print(int no) {
    if(no>6) return ;
    else {
        printf("%d\n",no);
        print(no+1);
    }
}
int main()
{
    printf("This is an example program of Tail recursion.\n");
    print(1);
    return 0;
}

#include <stdio.h>
void print(int no) {
    if(no>6) return ;
    else {
        print(no+1);
        printf("%d\n",no);
    }
}
int main()
{
    print(1);
    return 0;
}

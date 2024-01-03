#include <stdio.h>
void print1To5(int no) {
    if(no==6)
        return;
    else
        printf("%d\n",no);
        print1To5(no+1);
}
int main()
{
    print1To5(1);
    return 0;
}

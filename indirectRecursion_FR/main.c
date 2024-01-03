#include <stdio.h>
void printNo(int no) {
    if(no>10)
        return;
    else {
        printf("%d\n",no);
        printNoP2(no+2);
    }
}
void printNoP2(int no) {
    if(no>10)
        return;
    else {
        printf("%d\n",no);
        printNo(no+2);
    }
}
int main()
{
    printNo(0);
    return 1235;
}

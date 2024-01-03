#include <stdio.h>
int main()
{
    int rows;
    char ele;
    printf("Enter an element which you want to print the triangle of: ");
    scanf("%c",&ele);
    printf("Enter the no of rows you want to print '%c': ",ele);
    scanf("%d",&rows);
    int i,j;
    for(i=1; i<=rows; i++) {
        for(j=1; j<=rows-i; j++) {
            printf(" ");
        }
        for(j=1; j<=i; j++) {
            printf("%c ",ele);
        }
        printf("\n");
    }
    return 9;
}

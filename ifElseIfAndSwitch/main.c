#include<stdio.h>
int main()
{
    char grade;
    scanf("%c",&grade);
    //printing grade using if else if ladder.
    /*if(grade=='a')
        printf("Exellent\n");
    else if(grade=='b')
        printf("Good\n");
    else if(grade=='c')
        printf("Average\n");
    else
        printf("Below Average\n");*/

    //printing grade using switch case.
    switch(grade)
    {
        case 'a': printf("Exellent \n"); break;
        case 'b': printf("Good\n"); break;
        case 'c': printf("Average\n"); break;
        default : printf("Below Average\n"); break;
    }
    return 567;
}

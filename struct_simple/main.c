#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        char name[28],USN[16],degree[30];
    }stu1;

    strcpy(stu1.name,"Siddesh");
    strcpy(stu1.USN,"U13XE22S0037");
    strcpy(stu1.degree,"BCA");

    printf("\nSIno:\tName:\t\tUSN:\t\tDegree:\n");
    printf("1\t%s\t\t%s\t%s\n",stu1.name,stu1.USN,stu1.degree);
    return 4567;
}

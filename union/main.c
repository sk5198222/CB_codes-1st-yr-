#include<stdio.h>
int main()
{
    union student
    {
        char name[28],USN[14],degree[10];
    }stu1;
    printf("Enter stu name: ");
    gets(stu1.name);
    puts(stu1.name);
    printf("Enter stu USN: ");
    gets(stu1.USN);
    puts(stu1.USN);
    printf("Enter stu degree: ");
    gets(stu1.degree);
    puts(stu1.degree);
}

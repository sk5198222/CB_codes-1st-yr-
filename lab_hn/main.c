/*#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        char name[20],USN[16],comb[26],coll[28];
        struct address
        {
            char state[12],city[18],pincode[8];
        }a[5];
    }stu[5];
    int i=0,size;
    printf("How many student details you want to enter:\n");
    scanf("%d",&size);
    getchar();
    for(i=0; i<size; i++)
    {
        printf("Enter student %d name:\n",i+1);
        gets(stu[i].name);
        printf("Enter student %d USN:\n",i+1);
        gets(stu[i].USN);
        printf("Enter student %d Degree:\n",i+1);
        gets(stu[i].comb);
        printf("Enter student %d City:\n",i+1);
        gets(stu[i].a[i].city);
        printf("Enter student %d State:\n",i+1);
        gets(stu[i].a[i].state);
        printf("Enter student %d Pin code:\n",i+1);
        gets(stu[i].a[i].pincode);
    }
    printf("\n******************************************************************\n");
    printf("Name\tUSN\t\tDegree\tCity\tState\tPincode\n");
    printf("\n******************************************************************\n");
    for(i=0;i<size;i++)
    {
        printf("%s\t%s\t%s\t%s\t%s\t%s\n",stu[i].name,stu[i].USN,stu[i].comb,stu[i].a[i].city,stu[i].a[i].state,stu[i].a[i].pincode);

    }
    return 456;
}*/

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptrInt,size,extra,*i;
    printf("How many numbers you want to enter:\n");
    scanf("%d",&size);
    printf("Enter %d numbers:\n",size);
    ptrInt=(int *)malloc(size*4);
    i=(int *)calloc(1,4);
    for(*i=0; *i<size; (*i)++)
        scanf("%d",ptrInt+(*i));
    printf("You have entered:\n");
    for(*i=0; *i<size; (*i)++)
        printf("%d\n",*(ptrInt+(*i)));
    printf("Enter how many extra numbers do you want:\n");
    scanf("%d",&extra);
    ptrInt=(int *)realloc(ptrInt,extra*4);
    printf("Enter %d more numbers:\n",extra);
    for(; *i<(size+extra); (*i)++)
        scanf("%d",ptrInt+(*i));
    printf("Entered numbers:\n");
    for(*i=0; *i<(size+extra); (*i)++)
        printf("%d\n",*(ptrInt+(*i)));
    free(ptrInt);
    free(i);
    return 56;
}*/

#

//6. Program to perform addition and subtraction of Matrices
/*#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],rowS,colS,r,c;
    printf("Enter the row & column size:\nRow & Col size must be equal:\n");
    scanf("%d%d",&rowS,&colS);
    if(rowS==colS)
    {
        printf("Enter %d elements for matrix A:\n",rowS*colS);
        for(r=0; r<rowS; r++)
        {
            for(c=0; c<colS; c++)
            {
                scanf("%d",&a[r][c]);
            }
        }
        printf("\nEnter %d elements for matrix B:\n",rowS*colS);
        for(r=0; r<rowS; r++)
        {
            for(c=0; c<colS; c++)
            {
                scanf("%d",&b[r][c]);
            }
        }
        printf("\nMatrix A :\n");
        for(r=0; r<rowS; r++)
        {
            for(c=0; c<colS; c++)
            {
                printf("%d\t",a[r][c]);
            }printf("\n");
        }
        printf("\nMatrix B :\n");
        for(r=0; r<rowS; r++)
        {
            for(c=0; c<colS; c++)
            {
                printf("%d\t",b[r][c]);
            }printf("\n");
        }
        printf("\nSum of matrix A & B:\n");
        for(r=0; r<rowS; r++)
        {
            for(c=0; c<colS; c++)
            {
                printf("%d\t",a[r][c]+b[r][c]);
            }printf("\n");
        }
        printf("\nDifference of matrix A & B:\n");
        for(r=0; r<rowS; r++)
        {
            for(c=0; c<colS; c++)
            {
                printf("%d\t",a[r][c]-b[r][c]);
            }printf("\n");
        }
    }
    else
        printf("It must be a square matrix to perform addition/subtraction.\n");
    return 56;
}*/

//7. Program to read, display and multiply two m x n matrices using function
/*#include<stdio.h>
void readMatrix(int X[][10],int rowS,int colS)
{
    for(int i=0; i<rowS; i++)
    {
        for(int j=0; j<colS; j++)
        {
            scanf("%d", &X[i][j]);
        }
    }
}
void multiplyMatrix(int X[][10],int Y[][10],int Z[][10],int rowS,int colS)
{
    for (int i=0; i<rowS; i++)
    {
        for (int j=0; j<colS; j++)
        {
            for (int k=0; k<colS; k++)
            {
                Z[i][j]+=X[i][k]*Y[k][j];
            }
        }
    }
}
void printMatrix(int Z[][10],int rowS,int colS)
{
    printf("\nMutliplication of Two Matrices A*B is :\n");
    for(int i=0; i<rowS; i++)
    {
        for(int j=0; j<colS; j++)
        {
            printf("%d\t", Z[i][j]);
        }printf("\n");
    }
}
int main()
{
    int X[10][10], Y[10][10], Z[10][10]={0},rowS, colS;
    printf("Enter the Row and Column size for First Matrix:\n");
    scanf("%d%d", &rowS,&colS);
    if(colS!=rowS)
    {
        printf("\nInvalid Matrix size!!!!.\n");
        return 0;
    }
    printf("Enter %d Elements for the Matrix A:\n", rowS*colS);
    readMatrix(X,rowS,colS);
    printf("Enter %d Elements for the Matrix B:\n", rowS*colS);
    readMatrix(Y,rowS,colS);
    multiplyMatrix(X,Y,Z,rowS,colS);
    printMatrix(Z,rowS,colS);
    return 456;
}*/

//Program to read, display & find the trace and norm of a matrix in order M X N
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a[5][5],rowS,colS,r,c,trace=0,norm=0;
    printf("Enter the row & column size of a matrix:\n");
    scanf("%d%d",&rowS,&colS);
    if(rowS==colS)
    {
        printf("Enter %d elements:\n",rowS*colS);
    for(r=0; r<rowS; r++)
    {
        for(c=0; c<colS; c++)
        {
            scanf("%d",&a[r][c]);
            norm+=sqrt(a[r][c]);
            if(a[r]==a[c])
                trace+=a[r][c];
        }
    }
    printf("Entered matrix:\n");
    for(r=0; r<rowS; r++)
    {
        for(c=0; c<colS; c++)
        {
            printf("%d\t",a[r][c]);
        }printf("\n");
    }
    printf("\nTrace of the entered Matrix is:%d\n",trace);
    printf("\Normal of the entered Matrix is:%d\n",norm);
    }
    else
        printf("It need to be a square matrix for finding trace & norm.\n");
    return 567;
}*/

//3. Program to find length and Reverse of a string without using built in function.
/*#include<stdio.h>
int main()
{
    char string[28];
    int i=0;
    printf("Enter the string: ");
    gets(string);
    while(string[i]!='\0')
    {
        i++;
    }
    printf("Length of the string is: %d\n",i);
    printf("Reverse of the string is:\n");
    for(i-=1; i>=0; i--)
        printf("%c",string[i]);
    return 56;
}*/

//2. Program to read a string and to find the number of alphabets, digits, vowels, consonants, spaces and special characters.
/*#include<stdio.h>
int main()
{
    char string[30];
    int i=0,alphabets=0,vowels=0,consonants=0,digits=0,spaces=0,specialCharacters=0;
    printf("Enter a string:\n");
    gets(string);
    strlwr(string);
    while(string[i]!='\0')
    {
        if(string[i]>='a' && string[i]<='z')
        {
        alphabets++;
        if(string[i]=='a' || string[i]=='e'|| string[i]=='i' || string[i]=='o' || string[i]=='u')
            vowels++;
        else
            consonants++;
        }
        else if(string[i]>='0' && string[i]<='9')
            digits++;
        else if(string[i]==32)
            spaces++;
        else
            specialCharacters++;
        i++;
    }
    printf("\nNo. of Alphabets: %d\n",alphabets);
    printf("\nNo. of Vowels: %d\n",vowels);
    printf("\nNo. of Consonants: %d\n",consonants);
    printf("\nNo. of Digits: %d\n",digits);
    printf("\nNo. of Spaces: %d\n",spaces);
    printf("\nNo. of Special characters: %d\n",specialCharacters);
    return 456;
}*/

//5. Program to find first and second largest element in an array.
/*#include<stdio.h>
int main()
{
    int a[10],i,size,fGreatest=0,sGreatest=0;
    printf("How many numbers do you want to enter : ");
    scanf("%d",&size);
    printf("Enter %d array elements.\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",a+i);
    }
    for(i=0; i<size; i++)
    {
        if(a[i]>fGreatest)
        {
            sGreatest=fGreatest;
            fGreatest=a[i];
        }
        else if(a[i]>sGreatest)
        {
            sGreatest=a[i];
        }
    }
    printf("\nFirst greatest : %d\nSecond greatest : %d\n",fGreatest,sGreatest);
    return 789;
}*/

//9. Program to demonstrate student structure to read & display records of n students
/*#include<stdio.h>
#include<string.h>
int main()
{
    int size;
    struct student
    {
        char name[30],degree[40],USN[12],college[40];
    }stu[10];
    printf("How many students structure do you want:\n");
    scanf("%d",&size);
    getchar();
    for(int i=0; i<size; i++)
    {
        printf("\nEnter %d student name:\n",i+1);
        gets(stu[i].name);
        printf("Enter %d student degree:\n",i+1);
        gets(stu[i].degree);
        printf("Enter %d student USN:\n",i+1);
        gets(stu[i].USN);
        printf("Enter %d student college name:\n",i+1);
        gets(stu[i].college);
    }
    printf("\n****************************************************************\n");
    printf("\tName\tDegree\tUSN\t\tCollege\n");
    printf("\n****************************************************************\n");
    for(int i=0; i<size; i++)
    {
         printf("\t%s\t%s\t%s\t%s\n",stu[i].name,stu[i].degree,stu[i].USN,stu[i].college);
    }
    return 4567;
}*/

//1.Program to perform Bitwise operations.
/*#include<stdio.h>
int main()
{
 unsigned char a = 5, b = 9;
 printf("a = %d, b = %d\n", a, b);
 printf("a&b = %d\n", a & b);
 printf("a|b = %d\n", a | b);
 printf("a^b = %d\n", a ^ b);
 printf("~a = %d\n", a = ~a);
 printf("b<<1 = %d\n", b << 1);
 printf("b>>1 = %d\n", b >> 1);
 return 0;
}*/

//8. Program to check a given number is prime or not by user defining isprime( ) function
/*#include<stdio.h>
void isPrime(int);
int main()
{
    int no;
    printf("Enter a number:\n");
    scanf("%d",&no);
    isPrime(no);
    return 0;
}
void isPrime(int no)
{
    int i,divCount=0;
    for(i=1; i<=no; i++)
    {
        if(no%i==0)
        divCount++;
    }
    if(divCount==2)
    printf("%d is a Prime number\n",no);
    else
    printf("%d is not a Prime number\n",no);
}*/

//10. Program to demonstrate the concept of nested structure.
/*#include<stdio.h>
struct Person
{
     char Name[50];
     int Age;
     char Gender[10];
     struct Address
    {
         char City[10];
         char State[10];
         int Zipcode;
    }a;
}p[2];
int main()
{
     int i;
     for (i=0;i<2;i++)
     {
         printf("Enter the Name of person %d : ",i+1);
         gets(p[i].Name);
         printf("Enter the Age of person %d : ",i+1);
         scanf("%d",&p[i].Age);
         getchar();
         printf("Enter the Gender of person %d : ",i+1);
         gets(p[i].Gender);
         printf("Enter the City of person %d : ",i+1);
         gets(p[i].a.City);
         printf("Enter the State of person %d : ",i+1);
         gets(p[i].a.State);
         printf("Enter the Zip Code of person %d : ",i+1);
         scanf("%d",&p[i].a.Zipcode);
         getchar();
     }
     for (i=0;i<2;i++)
     {
         printf("\n\n***%d person Information***\n",i+1);
         printf("The Name of person %d is : %s\n",i+1,p[i].Name);
         printf("The Age of person %d is : %d\n",i+1,p[i].Age);
         printf("The Gender of person %d is : %s\n",i+1,p[i].Gender);
         printf("The City of person %d is : %s\n",i+1,p[i].a.City);
         printf("The State of person %d is : %s\n",i+1,p[i].a.State);
         printf("The Zip code of person %d is : %d\n",i+1,p[i].a.Zipcode);
     }
     return 456;
}*/

//11. Program to swap two integers using call-by-value and call-by-reference.
/*#include<stdio.h>
void callByValueSwapping(int, int);
void callByReferenceSwapping(int*, int*);
int main()
{
    int a=10,b=20;
    printf("Call bye value.\nBefore swapping a: %d, b: %d\n",a,b);
    callByValueSwapping(a,b);
    callByReferenceSwapping(&a,&b);
    printf("After swapping a: %d, b: %d\n",a,b);
    return 456;
}
void callByValueSwapping(int x, int y)
{
    int swap=y;
    y=x;
    x=swap;
    printf("After swapping a: %d, b: %d\n\n",x,y);
}
void callByReferenceSwapping(int *x, int *y)
{
    int swap=*y;
    printf("Call by Reference.\nBefore swapping a: %d, b: %d\n",*x,*y);
    *y=*x;
    *x=swap;
}*/

//12. Program to implement the concept of dynamic memory allocation(malloc(), calloc(), realloc(), free())


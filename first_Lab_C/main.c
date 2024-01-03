// to find area and circumference of a circle.
/*#include<stdio.h>
int main()
{
    float radius,area,circum;
    printf("Enter the radius to find Area & Circumference of a circle: ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circum=2*3.14*radius;
    printf("Area of the circle: %f\nCircumference of the circle: %f\n\n",area,circum);
    return 45;
}*/

// to read three numbers and find the greatest.
/*#include<stdio.h>
int main()
{
    int a,b,c,greatest;
    printf("Enter three numbers to find greatest among them:\n");
    scanf("%d%d%d",&a,&b,&c);
    greatest=(a>b&&a>c) ? a : (b>c) ? b : c;
    printf("Greatest number is: %d\n",greatest);
    return 456;
}*/

// to compare library functions of math.h.
/*#include<stdio.h>
int main()
{
    float no=3.14;
    printf("Ceil value of %f is: %f\n",no,ceil(no));
    printf("Floor value of %f is: %f\n",no,floor(no));
    printf("Square root of 256 is: %f\n",sqrt(256));
    printf("8 ^ 3 is: %f\n",pow(8,3));
    printf("Sin of 90: %f\n",sin(90));
    printf("Cos of 90: %f\n\n",cos(90));
    return 45;
}*/

// to generate the factorial of a given number.
/*#include<stdio.h>
int main()
{
    int no,fact=1,i;
    printf("Enter a no. to find it's Factorial: ");
    scanf("%d",&no);
    for(i=1; i<=no; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is: %d\n\n",no,fact);
    return 78;
}*/

// to generate n fibonacci sequence.
/*#include<stdio.h>
int main()
{
    int no,t1=0,t2=1,nT,i;
    printf("Enter a number to find it's Fibonacci Sequence: ");
    scanf("%d",&no);
    for(i=1; i<=no; i++)
    {
        printf("%d\n",t1);
        nT=t1+t2;
        t1=t2;
        t2=nT;
    }
    return 45;
}*/

// to read a number, find the sum of the digits, reverse the number and check it for palindrome.
/*#include<stdio.h>
int main()
{
    int no,dupNo,sum=0,rem,rev=0;
    printf("Enter the number to find it's sum, reverse & check for palindrome: ");
    scanf("%d",&no);
    dupNo=no;
    while(no>0)
    {
        rem=no%10;
        sum+=rem;
        rev=rev*10+rem;
        no/=10;
    }
    printf("Sum of digits: %d\nReverse: %d\n",sum,rev);
    if(rev==dupNo)
    {
        printf("%d is a palindrome.\n",dupNo);
    }
    else
    {
        printf("%d is not a palindrome.\n",dupNo);
    }
    return 456;
}*/

// to read numbers from keyboard until the user press 999 & find sum of only positive numbers.
/*#include<stdio.h>
int main()
{
    int no,sum=0;
    printf("Enter the numbers to find it's sum (enter 999 to stop):\n");
    while(1)
    {
        scanf("%d",&no);
        if(no==999)
            break;
        else if(no>0)
            sum=sum+no;
    }
    printf("\nSum of positive no.s: %d\n\n",sum);
    return 56;
}*/

//  to read percentage of marks & display appropriate message(demonstration of Switch statement).
/*#include<stdio.h>
int main()
{
     float percentage;
     char grade;
     printf("Enter the percentage\n");
     scanf("%f",&percentage);
     if(percentage>=80 && percentage<=100)
     grade='A';
     else if (percentage>=70 && percentage<80)
     grade='B';
     else if (percentage>=60 && percentage<70)
     grade='C';
     else if (percentage>=35 && percentage<60)
     grade='D';
     else if (percentage>=0 && percentage<35)
     grade='E';
     switch(grade)
     {
         case 'A':printf("Distinction!\n" );break;
         case 'B':printf("First class.\n" );break;
         case 'C':printf("Second class.\n" );break;
         case 'D':printf("Just passed.\n" );break;
         case 'E':printf("Fail.\n" );break;
         default :printf("Entered Invalid Percentage.\n");
     }
 return 0;
}*/


// to find the roots of quadratic equation(Demonstration of else-if ladder).
/*#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("Enter 3 values for a,b & c to find it's quadratic equation:\n");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Two real roots are: %f & %f\n\n",r1,r2);
    }
    else if(d==0)
    {
        r1=-b/(2*a);
        r2=r1;
        printf("Two roots are equal: %f & %f\n\n",r1,r2);
    }
    else
    {
        printf("Roots are imaginary.\n\n");
    }
    return 567;
}*/

// to read marks scored by a student & find the sum, average & result using switch case.
/*#include<stdio.h>
int main()
{
    int marks[7],sum=0;
    float avg;
    char name[32],grade;
    printf("Enter the student name:\n");
    gets(name);
    printf("Enter 7 subject marks of the student:\n");
    for(int i=0; i<6; i++)
    {
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    avg=sum/6.00;
    if(marks[0]<35 || marks[1]<35 || marks[2]<35 || marks[3]<35 || marks[4]<35 || marks[5]<35 || marks[6]<35)
        grade='F';
    else if(avg>=80)
        grade='A';
    else if(avg>=60)
        grade='B';
    else if(avg>=50)
        grade='C';
    else if(avg>=35 && avg>50)
        grade='D';
    puts(name);
    printf("Total marks obtained: %d\nAverage: %f\n",sum,avg);
    printf("Result: ");
    switch(grade)
    {
        case 'A': printf("Distinction.\n\n");break;
        case 'B': printf("First Class.\n\n");break;
        case 'C': printf("Second Class.\n\n");break;
        case 'D': printf("Just Pass.\n\n"); break;
        case 'F': printf("Failed.\n\n");break;
        default : printf("Entered Invalid percentage!!.\n\n");break;
    }
    return 567;
}*/

// to remove Duplicate elements in an Array.
/*#include<stdio.h>
int main()
{
    int a[10],size,i,dI,r;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("After deleting Duplicate elements:\n");
    for(i=0; i<size; i++)
    {
        for(dI=i+1; dI<size; dI++)
        {
                if(a[i]==a[dI])
                {
                    for(r=dI; r<size; r++)
                    {
                        a[r]=a[r+1];
                    }size--;
                    dI--;
                }
        }
    }
    for(r=0; r<size; r++)
    {
        printf("%d\n",a[r]);
    }
    return 56;
}*/

// to find GCD of two integers using function.
/*#include<stdio.h>
int findGCD(int,int);
int main()
{
    int a,b,GCD;
    printf("Enter two integers:\n");
    scanf("%d%d",&a,&b);
    GCD=findGCD(a,b);
    printf("GCD of %d & %d is %d.\n",a,b,GCD);
    return 567;
}
int findGCD(int c,int d)
{
    int gcd,i;
    for(i=1; i<=c && i<=d; i++)
    {
        if(c%i==0 && d%i==0)
            gcd=i;
    }
    return gcd;
}*/



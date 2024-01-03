#include<stdio.h>
int read2DArray(int array[][4],int rowS,int colS)
{
   int r,c,sum=0;
   printf("\nEnter %d elements:\n",rowS*colS);
   for(r=0; r<rowS; r++)
   {
       for(c=0; c<colS; c++)
       {
           scanf("%d",&array[r][c]);
           if(r==c)
                sum+=array[r][c];
       }
   }
   return sum;
}
void print2DArray(int array[][4],int rowS,int colS)
{
   int r,c;
   printf("\nEntered elements in the 2D Array are:\n");
   for(r=0; r<rowS; r++)
   {
       for(c=0; c<colS; c++)
       {
           printf("a[%d][%d]:%d\t",r,c,array[r][c]);
       }printf("\n");
   }
}
int main()
{
    int array[4][4],rowS,colS,sumD;
    printf("Enter the row & col size for a 2D Array:\n");
    scanf("%d%d",&rowS,&colS);
    sumD=read2DArray(array,rowS,colS);
    print2DArray(array,rowS,colS);
        printf("\nSum of diagonal elements is: %d\n",sumD);
    return 56;
}

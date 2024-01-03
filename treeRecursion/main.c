#include<stdio.h>
void towerOfHanoi(int n, char source, char dest, char aux)
{
     if(n == 1)
     {
     printf("\n Move disk 1 from %c rod to %c rod",source,dest);
     return;
     }
     towerOfHanoi(n-1,source,aux,dest);
     printf("\n Move disk %d from rod %c to rod %c",n,source,dest);
     towerOfHanoi(n-1,aux,dest,source);
}
int main()
{
     int no;
     printf("Enter the no of disks: ");
     scanf("%d",&no);
     towerOfHanoi(no, 'A', 'C', 'B');
     return 1235;
}

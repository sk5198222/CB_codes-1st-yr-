#include<conio.h>
int array[34];
//main
void venkatMain()
{
    int choice;
    while(1)
    {
        printf("\n9.Main menu\n");
        printf("1.Pointers\n");
        printf("2.Arrays\n");
        printf("3.Matrix\n");

        printf("<--Choose an option--> \n\t\t : ");
        scanf("%d",&choice);
        system("cls");

        switch(choice)
            {
                case 9: system("cls"); return;
                case 1: arraysMain(); getch(); system("cls"); break;
                case 2: matrixMain(); getch(); system("cls"); break;
                case 3: pointersMain(); getch(); system("cls"); break;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!"); getch(); system("cls");
            }
    }
 }


 //Pointers Main

void pointersMain(){
    int option;

    while(1)
    {
        printf("\n9.Go to the previous menu\n1.Pointer Illustration\n2.Insert an element into the array\n3.Delete an element from the array\n\nChoose one: ");
        scanf("%d",&option);
        system("cls");

        switch(option)
            {
                case 9: system("cls"); return;
                case 1: pointer(); break;
                case 2: insertionUsingPointers(); break;
                case 3: deletionWithPointers(); break;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!");
            }
            getch();
            system("cls");
    }
}


//Arrays Main
void arraysMain(){
    int option;

    while(1)
    {
        printf("\n9.Go to the previous menu\n1.Array Merging And Sorting\n2.Array Union\n3.Array Intersection\n4.Check Palindrome\n\n\nChoose one: ");
        scanf("%d",&option);
        system("cls");

        switch(option)
            {
                case 9: system("cls"); return;
                case 1: arrayMergingAndSorting(); break;
                case 2: arrayUnion(); break;
                case 3: arrayIntersection(); break;
                case 4: arrayPalindrome(); break;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!");
            }
            getch();
            system("cls");
    }
}


//Matrix Main
void matrixMain(){
    int option;

    while(1)
    {
        printf("\n9.Go to the previous menu\n1.Matrix Transpose\n2.Diagonal Elements\n\nChoose one: ");
        scanf("%d",&option);
        system("cls");

        switch(option)
            {
                case 0: system("cls"); return;
                case 1: matrixTranspose(); break;
                case 2: diagonalELements(); break;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!");
            }
            getch();
            system("cls");
    }
}



//Pointers
void pointer()
{
    int a;
    int *ptr;

    printf("Enter the value for a : ");
    scanf("%d",&a);

    ptr=&a;

    printf("Address of 'a' without using pointer : %u \n",&a);
    printf("Value of 'a' without using pointer : %d\n",a);
    printf("<---------->\n");

    printf("Address of 'a' using pointer : %u \n",ptr);
    printf("Value of 'a' using pointer : %d\n",*ptr);

    ++*ptr;
    printf("Incrementing the value of 'a' using pointer: %d \n",a);
}



//Inserting an ele in the array using Pointers

void insertionUsingPointers()
{
    int a[23],size,element,pos;
    int *ptr=&a;

    printf("Enter the size \n");
    scanf("%d",&size);

    if(size<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n\n");
        return;
    }

    printf("Enter the array elements \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }

    printf("Array elements : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(ptr+i));
    }

    printf("Enter the element you want to insert \n");
    scanf("%d",&element);

    printf("Enter the position in which you want to insert \n");
    scanf("%d",&pos);

    if(pos<=0)
    {
        printf("Invalid pos...!!!\nEnter a valid pos...(1-%d)\nRun again...!!!\n\n",size);
        return;
    }

    if(pos>size-1){
        printf("Invalid position\n");return;
    }

    for(int i=size-1;i>=pos-1;i--)
    {
        *(ptr+1+i)=*(ptr+i);
    }

    *(ptr+pos-1)=element;
    size++;

    printf("Elements after inserting \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}


//Deleting an ele from the array using Pointers

void deletionWithPointers()
{
    int a[23],size,pos;
    int *ptr=&a;

    printf("Enter the size \n");
    scanf("%d",&size);

    if(size<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(2-9)\nRun again...!!!\n\n");
        return;
    }

    printf("Enter the array elements \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }

    printf("Array elements : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(ptr+i));
    }

    printf("Enter the position from which  want to delete \n");
    scanf("%d",&pos);

    if(pos<=0)
    {
        printf("Invalid pos...!!!\nEnter a valid pos...(1-%d)\nRun again...!!!\n\n",size);
        return;
    }

    if(pos>size-1)
    {
         printf("Invalid position\n");return ;
    }

    for(int i=pos-1;i<size-1;i++)
    {
        *(ptr+i)=*(ptr+i+1);
    }
    size--;

    printf("Elements after deletion: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}



//Merge & Sort the two different Arrays

void arrayMergingAndSorting()
{
    int a[23],b[23];
    int size1,size2;

    printf("Enter the size of the first array \n");
    scanf("%d",&size1);

    if(size1<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n\n");
        return;
    }

    printf("Enter the first array elements \n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }

    // Second Array
    printf("Enter the size of the Second array \n");
    scanf("%d",&size2);

    if(size2<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n\n");
        return;
    }

    printf("Enter the Second array elements \n");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }

   // Merging
    int size3=size1+size2,c[23];
    int x=0;
    int j=0;

    while(x<size3)
    {
       if(x<size1)
       {
           c[x]=a[x];
       }
       else
       {
           c[x]=b[j];
           j++;
       }
       x++;
    }

    printf("<---Merged array--->g \n");
    for(int i=0;i<size3;i++)
    {
        printf("%d\n",c[i]);
    }

    // Insertion sort
    for(int i=1;i<size3;i++)
    {
        int current=c[i];
        int y=i-1;

        while(y>=0&&c[y]>current)
        {
            c[y+1]=c[y];
            y--;
        }
        c[y+1]=current;
    }

    printf("<----Merged  and Sorted Array elements----> \n");
    for(int i=0;i<size3;i++)
    {
        printf("%d\n",c[i]);
    }
}


//Transpose of Matrix(2D Array)

void matrixTranspose()
{
    int matrix[23][23];
    int r,c;

    printf("Enter the row and column size of the matrix \n");
    scanf("%d%d",&r,&c);

    if(r<=0 || c<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n\n");
        return;
    }

    printf("Enter the matrix elements \n");
    for( int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of a matrix\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",matrix[j][i]);

        }
        printf("\n");
    }
}


//Union of the Array elements

void arrayUnion()
{
    int a[23],b[23],c[23];
    int size1,size2,size3;

    printf("Enter the size of the first array \n");
    scanf("%d",&size1);

    if(size1<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n\n");
        return;
    }

    printf("Enter the array elements for the first array \n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the size of the Second  array \n");
    scanf("%d",&size2);

    if(size2<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n\n");
        return;
    }

    printf("Enter the array elements for the Second  array \n");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }

    size3= size1+size2;

    // Merging
    int j=0;
    int z=0;

    while(j<size3)
    {
       if(j<size1)
       {
           c[j]=a[j];
       }
       else
       {
           c[j]=b[z];
           z++;
       }
       j++;
    }

     printf("Elements\n");
     for(int i=0;i<size3;i++)
     {
         printf("%d\n",c[i]);
     }

     printf("*****\n");
      for(int i=0;i<size3-1;i++)
      {
          for(int j=i+1;j<size3;j++)
          {
              if(c[i]==c[j])
              {
                  for(int k=j;k<size3;k++)
                  {
                      c[k]=c[k+1];
                  }
                  size3--;
                  j--;
              }
          }
      }

      printf("Union of 2 given Arrays \n");
      for(int i=0;i<size3;i++)
      {
          printf("%d\n",c[i]);
      }
}


//Intersection of the Array elements

void arrayIntersection()
{
    int a[23],b[23],c[23];
    int size1,size2,size3,k=0;

    printf("Enter the size of the first array \n");
    scanf("%d",&size1);

    if(size1<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n\n");
        return;
    }

    printf("Enter the array elements for the first array \n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the size of the Second  array \n");
    scanf("%d",&size2);

    if(size2<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n\n");
        return;
    }

    printf("Enter the array elements for the Second  array \n");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
        }
    }

   size3=k;
   for(int i=0;i<size3-1;i++)
   {
       for(int j=i+1;j<size3;j++)
       {
           if(c[i]==c[j])
           {
               for(k=j;k<size3;k++)
               {
                   c[k]=c[k+1];

               }
               size3--;
               j--;
           }
       }
   }

   printf("Intersection of 2 given Arrays \n");
   for(int i=0;i<size3;i++)
   {
       printf("%d\n",c[i]);
   }
}



//Diagonal elements & it's Sum

void diagonalELements()
{
    int a[23][23];
    int r,c;
    start:

    printf("Enter the size  of the row and column of the square matrix \n");
    scanf("%d%d",&r,&c);

    if(r<=0 || c<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n\n");
        return;
    }

    if(r!=c)
    {
        printf("Row and column size of the matrix should be same \n\n");
        goto start;
    }

    printf("Enter the elements of the matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    int sum=0;

    printf("Diagonal element  of the matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                printf("%d\t",a[i][j]);
                sum=sum+a[i][j];
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("SUM of the diagonal elements : %d\n",sum);
}


//Array Palindrome

void arrayPalindrome()
{
    int a[23];
    int size,flag=1,i,j;

    printf("Enter the size of the array \n");
    scanf("%d",&size);

    if(size<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n");
        return;
    }

    printf("Enter the array elements \n");
    for( int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0, j=size-1;i<size/2,j>=size/2;i++,j--)
    {
        if(a[i]!=a[j])
        {
            flag=0;
            break;
        }
    }

    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }

    if(flag){
        printf("\nEntered array is  palindrome \n");
    }
    else{
        printf("\nEntered array is not palindrome \n");
    }
}



//Unique elements in an array
void uniqueElementsInArray()
{
   int a[23];
   int size;

   printf("Enter the size of the array\n");
   scanf("%d",&size);

   if(size<=0)
    {
        printf("Invalid size...!!!\nEnter a valid size...(1-9)\nRun again...!!!\n");
        return;
    }

   printf("Enter the array elements \n") ;
   for(int i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }

   //Unique Elements
   printf("Unique Elements \n");
   for(int i=0;i<size;i++)
   {
       int count=0;
       for(int j=0;j<size;j++)
       {
           if(a[i]==a[j])
           {
               count++;
           }
       }
       if(count==1)
       {
           printf("%d\n",a[i]);
       }
   }
}

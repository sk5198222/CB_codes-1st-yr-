//Dice Roll
void kavyMain()
{
    while(1){
        printf("\n9.Main menu\n1.Print Patterns\n\nChoose an option (9/1): ");
        int option;
        scanf("%d",&option);
        system("cls");
        switch(option)
            {
                case 9: system("cls"); return;
                case 1: printPatterns(); getch(); system("cls"); break;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!"); getch(); system("cls");
            }
    }
}



void printPatterns(){
    int option;

    while(1)
    {
        printf("\n9.Go to the previous menu\n1.Square\n2.Right Angle\n3.Inverted Right Triangle\n4.Pyramid\nSelect a pattern (1-4): ");
        scanf("%d",&option);
        system("cls");

        switch(option)
            {
                case 9: system("cls"); return;
                case 1: square(); break;
                case 2: rightTriangle(); break;
                case 3: invertedRightTriangle(); break;
                case 4: pyramid(); break;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!");
            }
            getch();
            system("cls");
    }
}



//Patterns

//Square Pattern
void square()
{
    int rows;
    printf("Enter the number of rows (row=col) \n: ");
    scanf("%d", &rows);

    if(rows<=0)
        printf("Row size should be positive only...!!!");

    printf("Pattern 1: Square\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//Right Angle Triangle Pattern
void rightTriangle()
{
     int rows;
     printf("Enter the number of rows (row=col) \n: ");
     scanf("%d", &rows);

     if(rows<=0)
        printf("Row size should be positive only...!!!");

     printf("Right Angled Triangle\n");
     for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
       {
            printf("* ");
       }
        printf("\n");
    }
}

//Inverted Right Angle Triangle Pattern
void invertedRightTriangle()
{
    int rows;
    printf("Enter the number of rows (row=col) \n: ");
    scanf("%d", &rows);

    if(rows<=0)
        printf("Row size should be positive only...!!!");

    printf("Inverted Right Angled Triangle\n");
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//Pyramid Pattern
void pyramid()
{
     int rows;
     printf("Enter the number of rows (row=col) \n: ");
     scanf("%d", &rows);

    if(rows<=0)
        printf("Row size should be positive only...!!!");

     printf("Pyramid\n");
     for (int i = 1; i <= rows; i++)
    {
      for (int j = 1; j <= rows - i; j++)
       {
           printf(" ");
       }
       for (int k = 1; k <= 2 * i - 1; k++)
       {
          printf("*");
       }
          printf("\n");
    }
}


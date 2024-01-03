//main

void naveenMain()
{
    while(1)
    {
        printf("\n9.Main menu\n1.Mini ATM\n\nSelect an option: ");

        int option;
        scanf("%d",&option);
        system("cls");

        switch(option)
            {
                case 9: system("cls"); return;
                case 1: mainATM(); getch(); system("cls"); break;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!\n\n"); getch(); system("cls");
            }
    }
}


//ATM demonstration

int balence=10000;   //Global Variable

void mainATM()
{
     int pin=9999,pin1,option;

     printf("Welcome to State Bank Of Bharat\n\n");
     printf("Enter your 4 digit secret pin:");
     scanf("%d",&pin1);
     system("cls");

     if(pin1>=0 && pin1<=9999)
     {
         if(pin==pin1)
         {
            savingsAcc();
         }
         else
         {
             system("cls");
             printf("Incorrect pin...!!!\n");
         }
     }
     else{
         printf("Invalid input...!!!\nOnly digits are allowed (that too positive digits)...!!!\n\n"); exit(0);
     }
}

void savingsAcc()
{
     int choice;
     while(1)
     {
         printf("1.Withdraw\n2.Deposit\n3.Balance Enquiry\n9.Exit\n\n");
         printf("Select an option: ");
         scanf("%d",&choice);
         system("cls");

        switch(choice)
             {
                 case 1: withdrow(); break;
                 case 2: deposite(); break;
                 case 3: checkbalence(); break;
                 case 9: printf("**********THANK YOU**********\n"); return;
                 default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!\n\n");
             }
             getch();
             system("cls");
     }
}

void withdrow()
{
    int amount;

    printf("Enter the amount\n");
    scanf("%d",&amount);

    if(amount>=0 && amount<=200000)
    {
        if(amount<=balence)
        {
            system("cls");
            printf("please collect your amount\n");
            balence=balence-amount;
        }

        else
        {
            system("cls");
            printf("Insufficiant balance!!!!!");
        }
    }
    else
    {
        printf("Enter a valid amount...!!!\n\n"); exit(0);
    }

}

void deposite()
{
    int amount;

    printf("Enter the amount\n");
    scanf("%d",&amount);

    if(amount>=0 && amount<=999999)
    {
        balence=balence+amount;
        system("cls");

        printf("Amount has been deposited\n");
    }
    else
    {
        printf("The amount should be positive digits only...!!!\n\n"); exit(0);
    }
}

void checkbalence()
{
    printf("Your account balance is %d\n",balence);
}

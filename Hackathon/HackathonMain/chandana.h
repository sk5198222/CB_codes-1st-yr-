#include<string.h>
#include<ctype.h>

//String Op
void chandanaMain()
{
    int choice;



    while(1)
    {
        printf("\n9.Main menu\n1.String Op\n2.Determine the characters\n\nChoose one: ");
        scanf("%d",&choice);
        system("cls");

        switch(choice)
            {
                case 1: stringOp(); getch(); system("cls"); break;
                case 2: identify_Alphabet_Numeric(); getch(); system("cls"); break;
                case 9: system("cls"); return;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!"); getch(); system("cls");
            }
    }
}


//Basic Operations on Strings
void stringOp()
{
    char a[19];
    char b[19];
    char c[19];

    getchar();
    printf("Enter the string  1 \n");
    gets(a);

    printf("Enter the string 2\n");
    gets(b);

    printf("\n\nEntered strings :\n");
    printf("String 1: %s\n",a);
    printf("String 2: %s \n\n\n",b);

    strcpy(c,a);

    printf("Reversed string  1:%s\n",strrev(a));
    printf("Concatenated String :%s\n",strcat(c,b));
    printf("Length of string 2: %d\n",strlen(b));
    printf("String UpperCase :%s\n",strupr(c));
    printf("String LowerCase : %s\n",strlwr(c));
}



//CType

char a[100];
void getString(){
    getchar();
    printf("Enter a string: ");
    gets(a);
}

void identify_Alphabet_Numeric()
{
    getString();
    int alpha_count=0,digit_count=0,upper_count=0,lower_count=0;
    for(int i=0;a[i]!='\0';i++)
    {
    if(isalpha(a[i]))
    alpha_count++;
    else if(isdigit(a[i]))
    digit_count++;
    }
    printf("In the given string:\n\tThe alphabets are:%d\n",alpha_count);
    printf("\tThe digits are:%d\n",digit_count);
    identify_ul();
    find_space();
}

void identify_ul()
{
    int upper_count=0,lower_count=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(isupper(a[i]))
            upper_count++;
        else if(islower(a[i]))
            lower_count++;
    }
    printf("\tUpper cases char are:%d\n",upper_count);
    printf("\tLower cases char are:%d\n",lower_count);
}

void find_space()
{
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(isspace(a[i]))
        count++;
    }
    printf("\tWhite spaces are:%d\n",count);
    find_lower();
}

void find_lower()
{
    printf("\tLower case of the given string: %s\n",strlwr(a));
    find_Upper();
}
void find_Upper()
{
    printf("\tUpper case of the given string: %s\n",strupr(a));

}

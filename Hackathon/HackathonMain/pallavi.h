//Main
#include<windows.h>

void pallaviMain(){
    while(1)
    {
        printf("\n9.Main menu\n1.Beep (sa...re...ga...ma)\n\nChoose an option : ");

        int option;
        scanf("%d",&option);
        system("cls");

        switch(option)
            {
                case 9: system("cls"); return;
                case 1: beepMain(); getch(); system("cls"); break;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!"); getch(); system("cls");
            }
    }
}

void beepMain()
{
    Beep(314,1500);
    Beep(350,1500);
    Beep(390,1500);
    Beep(467,1500);
    Beep(526,1500);
    Beep(624,1500);
    Beep(314,2000);
    Beep(314,500);
    Beep(350,500);
    Beep(390,500);
    Beep(467,500);
    Beep(526,500);
    Beep(624,500);
    Beep(314,500);
}

//Pre-defined header files
#include <stdio.h>
#include <string.h>

//User defined header files
#include "venkat.h"
#include "varunH.h"
#include "pallavi.h"
#include "naveen.h"
#include "kavya.h"
#include "searching.h"
#include "chandana.h"
#include "satyam.h"

int main()
{
    printf("\t\tTeam Ninth Innovators\n");
    int option;
    while(1)
    {
        printf("\n\nTopics :\n\n1.Conditional Statements --->   Naveen D.K\n2.Structures and Unions  --->   Varun G.A\n3.Arrays & Pointers\t --->   Venkat \n4.Searching\t\t --->   Varun G.A\n5.Strings\t\t --->   Chandana C.S\n6.Loops\t\t\t --->   Kavya K.B\n7.Header files\t\t --->   Pallavi M.H\n8.Game\n9.Exit\n\n");

        printf("\nSelect the topic : ");
        scanf("%d",&option);
        system("cls");

        switch(option){
                case 1: naveenMain(); break;
                case 2: varunMain(); break;
                case 3: venkatMain(); break;
                case 4: searchMain(); break;
                case 5: chandanaMain(); break;
                case 6: kavyMain(); break;
                case 7: pallaviMain(); break;
                case 8: satyamMain(); break;
                case 9: printf("\tThank You...!!!!\n\n\tTeam Ninth Innovators\n\n"); exit(9);
                default: printf("Invalid Option...!!!\nRead the options carefully...!!!\n"); getch(); system("cls");
        }
    }
}

//Main
#include<string.h>

void varunMain()
{
    int option;
    while(1)
    {
        printf("\n9.Main menu\n1.Train - Time_Table\n\nChoose an option: ");
        scanf("%d",&option);
        system("cls");

        switch(option)
            {
                case 9: system("cls"); system("cls"); return;
                case 1: trianMain(); getch(); system("cls"); break;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!"); getch(); system("cls");
            }
    }
}



//Train

struct train
{
    int trainNo;
    char trainName[110];
    char sDate[15];
    char source[110];
    char dDate[15];
    char destination[110];
    char frequency[110];

} t1[5];

void trianMain()
{
    int routes;

    while(1)
    {
        printf("1.Jammu to Kanyakumari\n2.Banglore to Mumbai\n3.Chennai To Delhi\n4.Banglore To Patna\n5.Luknow ToHyderbad\n9. Exit\n\nChoose a route: ");
        scanf("%d",&routes);
        system("cls");

        switch(routes)
            {
                case 1: jammuToKanyakumari(); break;
                case 2: bangloreToMumbai(); break;
                case 3: chennaiToDelhi(); break;
                case 4: bangloreToPatna(); break;
                case 5: lucknowToHyderbad(); break;
                case 9: system("cls"); return;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!");
            }
            getch();
            system("cls");
    }
}

void jammuToKanyakumari()
{
    t1[0].trainNo=16318;
    strcpy(t1[0].trainName,"Himsagar Exp");
    strcpy(t1[0].sDate,"01/10/2023");
    strcpy(t1[0].source,"   Jammu Tawi   ");
    strcpy(t1[0].dDate,"10/10/2023");
    strcpy(t1[0].destination,"Kanniyakumari   ");
    strcpy(t1[0].frequency,"Exp");

    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\JAMMU TO KANYAKUMARI TRAINS\t\t\t\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("|TrainNo|\tTrainName\t|   SourDate\t|");
    printf("     Source\t |   DestDate   |  Destination    |  Frequency  |\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");

    printf("|%d\t|\t%s\t|   %s  |%s|  %s  | %s|    %s      |\n",t1[0].trainNo,t1[0].trainName,t1[0].sDate,t1[0].source,t1[0].dDate,t1[0].destination,t1[0].frequency);
}

/*route 2
    banglore to mumbai*/
void bangloreToMumbai()
{
    t1[0].trainNo=19567;
    strcpy(t1[0].trainName,"Vivek Exp");
    strcpy(t1[0].sDate,"01/10/2023");
    strcpy(t1[0].source,"Krishnarajapuram");
    strcpy(t1[0].dDate,"02/10/2023");
    strcpy(t1[0].destination,"Vasai Road   ");
    strcpy(t1[0].frequency,"Mon");

    t1[1].trainNo=22498;
    strcpy(t1[1].trainName,"Sgnr Humsafar");
    strcpy(t1[1].sDate,"01/10/2023");
    strcpy(t1[1].source,"SBC junction    ");
    strcpy(t1[1].dDate,"02/10/2023");
    strcpy(t1[1].destination,"Mumbai Dadar ");
    strcpy(t1[1].frequency,"Mon");

    t1[2].trainNo=16332;
    strcpy(t1[2].trainName,"Tvc Exp  ");
    strcpy(t1[2].sDate,"01/10/2023");
    strcpy(t1[2].source,"Krishnarajapuram");
    strcpy(t1[2].dDate,"02/10/2023");
    strcpy(t1[2].destination,"Shivaji mah  ");
    strcpy(t1[2].frequency,"Mon");

    t1[3].trainNo=11014;
    strcpy(t1[3].trainName,"Cbe Exp  ");
    strcpy(t1[3].sDate,"01/10/2023");
    strcpy(t1[3].source,"Bangalore City  ");
    strcpy(t1[3].dDate,"02/10/2023");
    strcpy(t1[3].destination,"Tilak  Road  ");
    strcpy(t1[3].frequency,"Mon");

    t1[4].trainNo=19567;
    strcpy(t1[4].trainName,"Bikaner Exp");
    strcpy(t1[4].sDate,"01/10/2023");
    strcpy(t1[4].source,"Yesvantpur Jn   ");
    strcpy(t1[4].dDate,"02/10/2023");
    strcpy(t1[4].destination,"Vasai Road   ");
    strcpy(t1[4].frequency,"Mon");

    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\BENGALURU TO MUMBAI TRAINS\t\t\t\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("|TrainNo|\tTrainName\t|   SourDate\t|");
    printf("     Source\t |   DestDate   |  Destination    |  Frequency  |\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");

    for(int i=0; i<5; i++)

        printf("|%d\t|\t%s\t|   %s  |%s|  %s  |  %s  |   %s      |\n",t1[i].trainNo,t1[i].trainName,t1[i].sDate,t1[i].source,t1[i].dDate,t1[i].destination,t1[i].frequency);
}

//route 3
void chennaiToDelhi()
{
    t1[0].trainNo=12621;
    strcpy(t1[0].trainName,"Tamilnadu Exp");
    strcpy(t1[0].sDate,"01/10/2023");
    strcpy(t1[0].source,"Chennai Central ");
    strcpy(t1[0].dDate,"02/10/2023");
    strcpy(t1[0].destination,"Nizamuddin Railway");
    strcpy(t1[0].frequency,"Mon");

    t1[1].trainNo=22498;
    strcpy(t1[1].trainName,"Grand Trunk Exp");
    strcpy(t1[1].sDate,"01/10/2023");
    strcpy(t1[1].source,"Tambaram Railway");
    strcpy(t1[1].dDate,"02/10/2023");
    strcpy(t1[1].destination,"Nizamuddin Railway");
    strcpy(t1[1].frequency,"Mon");

    t1[2].trainNo=16332;
    strcpy(t1[2].trainName,"Tirukkural Exp");
    strcpy(t1[2].sDate,"01/10/2023");
    strcpy(t1[2].source,"Perambur Railway");
    strcpy(t1[2].dDate,"02/10/2023");
    strcpy(t1[2].destination,"Nizamuddin Railway");
    strcpy(t1[2].frequency,"Mon");

    t1[3].trainNo=11014;
    strcpy(t1[3].trainName,"Garibrath Exp");
    strcpy(t1[3].sDate,"01/10/2023");
    strcpy(t1[3].source," Chennai Egmore ");
    strcpy(t1[3].dDate,"02/10/2023");
    strcpy(t1[3].destination,"Nizamuddin Railway");
    strcpy(t1[3].frequency,"Mon");

    t1[4].trainNo=19567;
    strcpy(t1[4].trainName,"Andaman Express");
    strcpy(t1[4].sDate,"01/10/2023");
    strcpy(t1[4].source,"Chennai Central ");
    strcpy(t1[4].dDate,"02/10/2023");
    strcpy(t1[4].destination,"Nizamuddin Railway");
    strcpy(t1[4].frequency,"Mon");

    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\CHENNAI TO DELHI TRAINS\t\t\t\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("|TrainNo|\tTrainName\t|   SourDate \t|");
    printf("     Source\t    |   DestDate     |      Destination      |  Frequency  |\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");

    for(int i=0; i<5; i++)

        printf("|%d\t|\t%s\t|   %s  | %s  |   %s   |   %s  |    %s      |\n",t1[i].trainNo,t1[i].trainName,t1[i].sDate,t1[i].source,t1[i].dDate,t1[i].destination,t1[i].frequency);
}

//route 4
void bangloreToPatna()
{
    t1[0].trainNo=03246;
    strcpy(t1[0].trainName,"Smvb Dnr Spl");
    strcpy(t1[0].sDate,"01/10/2023");
    strcpy(t1[0].source,"Smvt Bengaluru");
    strcpy(t1[0].dDate,"03/10/2023");
    strcpy(t1[0].destination,"Danapur Railway");
    strcpy(t1[0].frequency,"Mon");

    t1[1].trainNo=12295;
    strcpy(t1[1].trainName,"Sanghamitra Exp");
    strcpy(t1[1].sDate,"01/10/2023");
    strcpy(t1[1].source,"Bangalore City");
    strcpy(t1[1].dDate,"03/10/2023");
    strcpy(t1[1].destination,"Patna Junction ");
    strcpy(t1[1].frequency,"Mon");

    t1[2].trainNo=12578;
    strcpy(t1[2].trainName,"Bagmati Exp");
    strcpy(t1[2].sDate,"01/10/2023");
    strcpy(t1[2].source,"Smvt Bengaluru");
    strcpy(t1[2].dDate,"03/10/2023");
    strcpy(t1[2].destination,"Danapur Railway");
    strcpy(t1[2].frequency,"Mon");

    t1[3].trainNo=11014;
    strcpy(t1[3].trainName,"Ypr Exp   ");
    strcpy(t1[3].sDate,"01/10/2023");
    strcpy(t1[3].source,"Bangalore City");
    strcpy(t1[3].dDate,"03/10/2023");
    strcpy(t1[3].destination,"Danapur railway");
    strcpy(t1[3].frequency,"Mon");

    t1[4].trainNo=22354;
    strcpy(t1[4].trainName,"HUMSAFAR EXP");
    strcpy(t1[4].sDate,"01/10/2023");
    strcpy(t1[4].source,"Smvt Bengaluru");
    strcpy(t1[4].dDate,"03/10/2023");
    strcpy(t1[4].destination,"Patna Junction ");
    strcpy(t1[4].frequency,"Mon");

    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\BANGLORE TO PATNA\t\t\t\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("|TrainNo|\tTrainName\t|   SourDate\t|");
    printf("      Source\t  |   DestDate   |     Destination      |  Frequency  |\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");

    for(int i=0; i<5; i++)

        printf("|%d\t|\t%s\t|   %s  | %s  |  %s  |   %s    |    %s      |\n",t1[i].trainNo,t1[i].trainName,t1[i].sDate,t1[i].source,t1[i].dDate,t1[i].destination,t1[i].frequency);
}

//route 5
void lucknowToHyderbad()
{
    t1[0].trainNo=22684;
    strcpy(t1[0].trainName,"Gkp Exp  ");
    strcpy(t1[0].sDate,"01/10/2023");
    strcpy(t1[0].source,"Lucknow  ");
    strcpy(t1[0].dDate,"02/10/2023");
    strcpy(t1[0].destination,"Hyderabad   ");
    strcpy(t1[0].frequency,"Mon");

    t1[1].trainNo=12589;
    strcpy(t1[1].trainName,"Hyb Fest Spl");
    strcpy(t1[1].sDate,"01/10/2023");
    strcpy(t1[1].source,"Nagar    ");
    strcpy(t1[1].dDate,"02/10/2023");
    strcpy(t1[1].destination,"Secunderabad");
    strcpy(t1[1].frequency,"Mon");

    t1[2].trainNo=22684;
    strcpy(t1[2].trainName,"Tvc Exp  ");
    strcpy(t1[2].sDate,"01/10/2023");
    strcpy(t1[2].source,"K.R puram");
    strcpy(t1[2].dDate,"02/10/2023");
    strcpy(t1[2].destination,"Shivaji mah ");
    strcpy(t1[2].frequency,"Mon");

    t1[3].trainNo=11014;
    strcpy(t1[3].trainName,"Mbnr Spl");
    strcpy(t1[3].sDate,"01/10/2023");
    strcpy(t1[3].source,"Aishbagh ");
    strcpy(t1[3].dDate,"02/10/2023");
    strcpy(t1[3].destination," Kacheguda  ");
    strcpy(t1[3].frequency,"Mon");

    t1[4].trainNo=19567;
    strcpy(t1[4].trainName,"Ypr Sf Exp");
    strcpy(t1[4].sDate,"01/10/2023");
    strcpy(t1[4].source,"Lucknow  ");
    strcpy(t1[4].dDate,"02/10/2023");
    strcpy(t1[4].destination,"Hyderabad   ");
    strcpy(t1[4].frequency,"Mon");

    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\LUCKNOW TO HYDERABAD TRAINS\t\t\t\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("|TrainNo|\tTrainName\t|   SourDate\t|");
    printf("     Source\t |   DestDate   |  Destination      |  Frequency  |\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________\n");

    for(int i=0; i<5; i++)

        printf("|%d\t|\t%s\t|   %s  |    %s   |  %s  |   %s    |    %s      |\n",t1[i].trainNo,t1[i].trainName,t1[i].sDate,t1[i].source,t1[i].dDate,t1[i].destination,t1[i].frequency);
}



#include<stdio.h>
#include<string.h>
void soldiers_Who_Sacrificed()
{
    struct Soldiers_Who_Martyrd
    {
        char rank[40],name[60],unit[46],regiment[80],DOB[30],DOM[22],operations[100],awards[200],yearsOfService[20],university[96];
        int SIno,ageAtMartyrd;
    }soldiers[5];
    soldiers[0].SIno=1;
    strcpy(soldiers[0].name,"Major Mohit Sharma\t");
    strcpy(soldiers[0].rank," Major");
    strcpy(soldiers[0].unit,"1 Para SF");
    strcpy(soldiers[0].regiment,"Parachute Regiment");
    strcpy(soldiers[0].DOB,"13 Jan 1978");
    strcpy(soldiers[0].DOM,"21 Mar2009");
    soldiers[0].ageAtMartyrd=2009-1978;
    strcpy(soldiers[0].operations,"Kupwara Operation");
    strcpy(soldiers[0].awards,"AC & SM");
    strcpy(soldiers[0].yearsOfService,"10 Years");
    strcpy(soldiers[0].university,"NDA & IMA");
    soldiers[1].SIno=2;
    strcpy(soldiers[1].name,"Captain Vikram Batra\t");
    strcpy(soldiers[1].rank," Captain");
    strcpy(soldiers[1].unit,"13 JAK RR");
    strcpy(soldiers[1].regiment,"Rashtriya Rifles");
    strcpy(soldiers[1].DOB,"  9 Sep 1974\t");
    strcpy(soldiers[1].DOM,"7 Jul 1999");
    soldiers[1].ageAtMartyrd=1998-1974;
    strcpy(soldiers[1].operations,"Kargil War (1999)");
    strcpy(soldiers[1].awards," PVC");
    strcpy(soldiers[1].yearsOfService,"   2 Years");
    strcpy(soldiers[1].university," IMA      ");
    soldiers[2].SIno=3;
    strcpy(soldiers[2].name,"Major Sandeep Unnikrishnan");
    strcpy(soldiers[2].rank,"Major");
    strcpy(soldiers[2].unit,"51 SAG, NSG");
    strcpy(soldiers[2].regiment,"Bihar Regiment\t");
    strcpy(soldiers[2].DOB,"  15 Mar 1977");
    strcpy(soldiers[2].DOM,"28 Nov 2008");
    soldiers[2].ageAtMartyrd=2008-1977;
    strcpy(soldiers[2].operations,"Operation Black Tornado");
    strcpy(soldiers[2].awards," AC ");
    strcpy(soldiers[2].yearsOfService,"   9 Years");
    strcpy(soldiers[2].university," NDA & IMA");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
    printf("\t\t\t********************************************<   The real life Heroes    >*****************************************************\n");
    printf("___________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("|SI No|   |Name|\t\t    |Rank|\t|Unit|\t\t|Regiment|\t     |DOB|\t     |DOM|      |Age|\t|Operations|\t       |Awards|  |Service|  |University|\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    for(int i=0; i<=2; i++)
    {
        printf("|   %d\t%s   %s\t%s\t%s   %s    %s   %d\t%s\t%s   %s   %s  |\n",soldiers[i].SIno,soldiers[i].name,soldiers[i].rank,soldiers[i].unit,soldiers[i].regiment,soldiers[i].DOB,soldiers[i].DOM,soldiers[i].ageAtMartyrd,soldiers[i].operations,soldiers[i].awards,soldiers[i].yearsOfService,soldiers[i].university);
    }
    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}
int main()
{
    soldiers_Who_Sacrificed();
    return 0;
}

#include<conio.h>
struct calender
{
    int date[44];
    int impDate[20];
}m[12];

int main()
{
    int choiceM;
    while(1){
        printf("\t1----->  JANUARY\n");
        printf("\t2----->  FEBRUARY\n");
        printf("\t3----->  MARCH\n");
        printf("\t4----->  APRIL\n");
        printf("\t5----->  MAY\n");
        printf("\t6----->  JUNE\n");
        printf("\t7----->  JULY\n");
        printf("\t8----->  AUGUST\n");
        printf("\t9----->  SEPTEMBER\n");
        printf("\t10-----> OCTOBER\n");
        printf("\t11-----> NOVEMBER\n");
        printf("\t12-----> DECEMBER\n");
        printf("Choose the month : ");
        scanf("%d",&choiceM);
        system("cls");
        printf("\n\n");
        switch(choiceM){
            case 0: return 1235;
            case 1: getJan(); break;
            case 2: getFeb(); break;
            case 3: getMar(); break;
            case 4: getApr(); break;
            case 5: getMay(); break;
            case 6: getJun(); break;
            case 7: getJul(); break;
            case 8: getAug(); break;
            case 9: getSep(); break;
            case 10: getOct(); break;
            case 11: getNov(); break;
            case 12: getDec(); break;
            default: printf("Invalid Month!!!!\n");
        }
        getch();
        system("cls");
    }
}

//Jan
void setJan(){
    for(int i=0; i<31; i++){
        m[0].date[i]=i+1;
    }
}

void getJan(){
    setJan();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<31)
    {
        if(i==1 || i==2 || i==0){}
        else if(i%7==0){
            printf("\n");
        }
        printf("%d\t",m[0].date[i]);
        i++;
    }
}

//Feb
void setFeb(){
    for(int i=3; i<=30; i++){
        m[1].date[i]=i-2;
    }
}
void getFeb(){
    setFeb();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<=30)
    {
        if(i<3)
            printf("\t");
        else{
            if(i==1 || i==2 || i==0){}
            else if(i%7==0){
                printf("\n");
            }
            printf("%d\t",m[1].date[i]);
        }
        i++;
    }
}

//March
void setMar(){
    for(int i=3; i<=33; i++){
        m[2].date[i]=i-2;
    }
}
void getMar(){
    setMar();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<=33)
    {
        if(i<3)
            printf("\t");
        else{
            if(i==1 || i==2 || i==0){}
            else if(i%7==0){
                printf("\n");
            }
            printf("%d\t",m[2].date[i]);
        }
        i++;
    }
}

//April
void setApr(){
    for(int i=6; i<=35; i++){
        m[3].date[i]=i-5;
    }
}
void getApr(){
    setApr();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<=35)
    {
        if(i<6)
            printf("\t");
        else{
            if(i==1 || i==2 || i==0){}
            else if(i%7==0){
                printf("\n");
            }
            printf("%d\t",m[3].date[i]);
        }
        i++;
    }
}

//May
void setMay(){
    for(int i=1; i<32; i++){
        m[4].date[i]=i;
    }
}
void getMay(){
    setMay();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<32)
    {
        if(i<1)
            printf("\t");
        else{
            if(i==1 || i==2 || i==0){}
            else if(i%7==0){
                printf("\n");
            }
            printf("%d\t",m[4].date[i]);
        }
        i++;
    }
}

//June
void setJun(){
    for(int i=4; i<34; i++){
        m[5].date[i]=i-3;
    }
}

void getJun(){
    setJun();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<34)
    {
        if(i<4)
            printf("\t");
        else{
            if(i==1 || i==2 || i==0){}
            else if(i%7==0){
                printf("\n");
            }
            printf("%d\t",m[5].date[i]);
        }
        i++;
    }
}

//July
void setJul(){
    for(int i=6; i<37; i++){
        m[6].date[i]=i-5;
    }
}

void getJul(){
    setJul();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<37)
    {
        if(i<6)
            printf("\t");
        else{
            if(i==1 || i==2 || i==0){}
            else if(i%7==0){
                printf("\n");
            }
            printf("%d\t",m[6].date[i]);
        }
        i++;
    }
}

//August
void setAug(){
    for(int i=2; i<33; i++){
        m[7].date[i]=i-1;
    }
}

void getAug(){
    setAug();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<33)
    {
        if(i<2)
            printf("\t");
        else{
            if(i==1 || i==2 || i==0){}
            else if(i%7==0){
                printf("\n");
            }
            printf("%d\t",m[7].date[i]);
        }
        i++;
    }
}

//September
void setSep(){
    for(int i=5; i<35; i++){
        m[8].date[i]=i-4;
    }
}
void getSep(){
    setSep();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<35)
    {
        if(i<5)
            printf("\t");
        else{
            if(i==1 || i==2 || i==0){}
            else if(i%7==0){
                printf("\n");
            }
            printf("%d\t",m[8].date[i]);
        }
        i++;
    }
}

//October
void setOct(){
    for(int i=0; i<31; i++){
        m[9].date[i]=i+1;
    }
}
void getOct(){
    setOct();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<31)
    {
        if(i==1 || i==2 || i==0){}
        else if(i%7==0){
            printf("\n");
        }
        printf("%d\t",m[9].date[i]);
        i++;
    }
}

//November
void setNov(){
    for(int i=3; i<33; i++){
        m[10].date[i]=i-2;
    }
}
void getNov(){
    setNov();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<33)
    {
        if(i<3)
            printf("\t");
        else{
            if(i==1 || i==2 || i==0){}
            else if(i%7==0){
                printf("\n");
            }
            printf("%d\t",m[10].date[i]);
        }
        i++;
    }
}

//December
void setDec(){
    for(int i=5; i<36; i++){
        m[11].date[i]=i-4;
    }
}
void getDec(){
    setDec();
    printf("Sun     Mon    Tue     Wed     Thu     Fri     Sat\n");
    int i=0;
    while(i<36)
    {
        if(i<5)
            printf("\t");
        else{
            if(i==1 || i==2 || i==0){}
            else if(i%7==0){
                printf("\n");
            }
            printf("%d\t",m[11].date[i]);
        }
        i++;
    }
}

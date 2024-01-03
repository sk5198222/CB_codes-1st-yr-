#include<string.h>
#include<ctype.h>
struct Box{
    char name;
    int nos[8];
}box[4];

void satyamMain(){
     while(1)
    {
        printf("\n9.Main menu\n1.Number guessing game\n\nSelect an option: ");

        int option;
        scanf("%d",&option);
        system("cls");

        switch(option)
            {
                case 9: system("cls"); return;
                case 1: guessMain(); getch(); system("cls"); break;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!"); getch(); system("cls");
            }
    }

}

void guessMain(){
    system("cls");
    getchar();
    setBoxes();
    getBoxes();
    userInput();
    guess();
}


void setBoxes(){

    //box1
    box[0].name='A';
    int i;
    for(i=0; i<=7; i++){
        box[0].nos[i]=i+8;
    }

    //box2
    box[1].name='B';
    for(i=0; i<=7; i++){
        box[1].nos[i]=i+4;
        if(i>3)
            box[1].nos[i]=i+8;
    }

    //box3
    box[2].name='C';
    for(i=0; i<=7; i++){
        if(i<=1)
            box[2].nos[i]=i+2;
        else if(i>1 && i<=3)
            box[2].nos[i]=i+4;
        else if(i>3 && i<=5)
            box[2].nos[i]=i+6;
        else
            box[2].nos[i]=i+8;
    }


    //box4
    box[3].name='D';
    int j=1;
    for(i=0; i<=7; i++){
        box[3].nos[i]=j;
        j=j+2;
    }
}


void getBoxes(){

    for(int i=0; i<=3; i++){
            printf("\t _________________________________\n");
        printf("Card [%d] ",i+1);
        for(int j=0; j<=7; j++){
            if(j==0 || j==4)
                printf("| ");
            if(j==4)
                printf("\n\t |");
            printf("  %d\t",box[i].nos[j]);
        }printf("|\n\t ---------------------------------\n");//printf("|\n");
    }
}

int card1=0,card2=0,card3=0,card4=0;

void userInput(){

    char choice;
    printf("\n\nChoose a number without telling me,\n");
    printf("Does that number appeared on card 1...? (Y/N) :\n");
    choice=getchar();
    getchar();
    if(choice=='y' || choice=='Y' || choice=='N' || choice=='n')
    {
        if(choice=='Y' || choice=='y')
            card1=1;

        printf("Does that number appeared on card 2 also...? (Y/N) :\n");
        choice=getchar();
        getchar();
        if(choice=='Y' || choice=='y')
            card2=1;

        printf("Does that number appeared on card 3 also...? (Y/N) :\n");
        choice=getchar();
        getchar();
        if(choice=='Y' || choice=='y')
            card3=1;

        printf("Does that number appeared on card 4 also...? (Y/N) :\n");
        choice=getchar();
        getchar();
        if(choice=='Y' || choice=='y')
            card4=1;
    }
    else
    {
        printf("\nInvalid Input...!!!\nRun again...!!!\n"); exit(0);
        getchar();
    }
}

void guess(){

    if(card1==1 && card2==1 && card3==1 && card4==1){
        printf("The number you've guessed was : %d\n",8+4+2+1);
    }
    else if(card1==1 && card2==1 && card3==1){
        printf("The number you've guessed was : %d\n",8+4+2);
    }
    else if(card1==1 && card2==1 && card4==1){
        printf("The number you've guessed was : %d\n",8+4+1);
    }
    else if(card1==1 && card3==1 && card4==1){
        printf("The number you've guessed was : %d\n",8+2+1);
    }
    else if(card2==1 && card3==1 && card4==1){
        printf("The number you've guessed was : %d\n",4+2+1);
    }
    else if(card1==1 && card2==1){
        printf("The number you've guessed was : %d\n",8+4);
    }
    else if(card1==1 && card3==1){
        printf("The number you've guessed was : %d\n",8+2);
    }
    else if(card1==1 && card4==1){
        printf("The number you've guessed was : %d\n",8+1);
    }
    else if(card3==1 && card2==1){
        printf("The number you've guessed was : %d\n",4+2);
    }
    else if(card2==1 && card4==1){
        printf("The number you've guessed was : %d\n",4+1);
    }
    else if(card3==1 && card4==1){
        printf("The number you've guessed was : %d\n",2+1);
    }
    else if(card1==1)
    {
        printf("The number you've guessed was : %d\n",8);
    }
    else if(card2==1)
    {
        printf("The number you've guessed was : %d\n",4);
    }
    else if(card3==1)
    {
        printf("The number you've guessed was : %d\n",2);
    }
    else
    {
        printf("The number you've guessed was : %d\n",1);
    }

    getchar();
    system("cls");
}

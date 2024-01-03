#include<stdio.h>
int main()
{
    char string[10];
    int i=0,digits;
    printf("Enter an roman number to convert it into Digits:\n");
    gets(string);
    while(string[i]!='\0')
    {
        if(string[i]=='I')
            digits+=1;

    }
}

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char content[160];
    int i,nChars=0,nWords=0,nLines=0,a,b,c;
    FILE *file1;
    file1= fopen("text_File_1.txt","r");
    //fprintf(file1,"\nThis is a new line buddy!!\nEnjoy!!!");
    while(fgets(content,160,file1)){
        puts(content);
        i=0,a=0,b=0,c=0;
        while(content[i]!='\0'){
            if(content[i]=='\n'){
                a++;
                b++;
            }
            else if(content[i]==' ')
                b++;
            else if(content[i]!='\n' && content[i]!=' ')
                c++;
            i++;
        }
        nLines+=a;
        nWords+=b;
        nChars+=c;

    }
    printf("\nNo of Lines: %d\nNo of Words: %d\nNo of Chars: %d\n",nLines,nWords,nChars);
    fclose(file1);
    return 0;
}

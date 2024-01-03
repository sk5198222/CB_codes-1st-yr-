/*#include<stdio.h>
#include<math.h>
int main()
{
    float no=3.2;
    printf("Ciel of %f is: %f\n",no,ceil(no));
    printf("Floor of %f is: %f\n",no,floor(no));
    printf("Square root of 256 is: %f\n",sqrt(256));
    printf("4 ^ 3: %f\n",pow(4,3));
    printf("Sin of 90: %f\n",sin(90));
    printf("Cos of 90: %f\n",cos(90));
    return 45;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char string[30];
    int i=0,alphabets=0,vowels=0,consonants=0,digits=0,spaces=0,specialChar=0;
    printf("Enter a string:\n");
    gets(string);
    strlwr(string);
    while(string[i]!='\0')
    {
        if(string[i]>='a' && string[i]<='z')
        {
            alphabets++;
            if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
                vowels++;
            else

                consonants++;
        }
        else if(string[i]>='0' && string[i]<='9')
            digits++;
        else if(string[i]==32)
            spaces++;
        else
            specialChar++;
        i++;
    }
    printf("\nNo. of alphabets: %d\n",alphabets);
    printf("\nNo. of vowels: %d\n",vowels);
    printf("\nNo. of consonants: %d\n",consonants);
    printf("\nNo. of digits: %d\n",digits);
    printf("\nNo. of spaces: %d\n",spaces);
    printf("\nNo. of Special Characters: %d\n",specialChar);
    return 456;
}

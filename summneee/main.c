#include<stdio.h>
#include<string.h>
#include<ctype.h>
void find_lower(char a[])
{
    printf("Converted the string to lower case:\n");
 for(int i=0;i<strlen(a);i++)
 {
 a[i]=tolower(a[i]);
 }
 printf("%s\n\n",a);
}
void convertToUpperCase(char a[])
{
    printf("Converted the string into upper case:\n");
 for(int i=0;i<strlen(a);i++)
 {
 a[i]=toupper(a[i]);
 }
 printf("%s\n",a);
}
int main()
{
char a[]="Hi 8792249728,""Interface College Of Computer Applications";
find_lower(a);
convertToUpperCase(a);
return 1235;
}


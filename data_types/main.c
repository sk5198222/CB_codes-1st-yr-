#include<stdio.h>
int main()
{
    int num=0; //Integer variable 'num' & it's value is 10;
    float pi=3.142345; //Floating variable 'pi' & it's value is 3.14;
    char alphabet='S'; //Character variable 'alphabet' it's value is 'S'
    printf("Integer num: %d\nFloat pi:%f\nCharacter alphabet: %c\n",num,pi,alphabet);
    printf("Size of Integer variable 'num': %d\nSize of Floating variable 'pi': %d\nSize of character variable 'alphabet': %d\n",sizeof(num),sizeof(pi),sizeof(alphabet));
    return 567;
}

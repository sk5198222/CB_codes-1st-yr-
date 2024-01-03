#include<stdio.h>
void callByValue(float x, float y);
void callByReference(float*, float*);
int main()
{
    float a=10.8, b=20.8;
    callByValue(a,b);
    //
    callByReference(&a,&b);
    printf("a: %f\nb: %f\n",a,b);
    return 567;
}
/*void callByValue(float x,float y)
{
    x+=00.2;
    y+=00.2;
}
/*void callByReference(float *x,float *y)
{
    *x+=00.2;
    *y+=00.2;
}*/

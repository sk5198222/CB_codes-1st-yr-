#include<stdio.h>
#include<string.h>
struct Person
{
	char name[30];
	struct Person *nextPerson;
}p1,p2,p3;

int main()
{
	strcpy(p1.name,"RG");
	p1.nextPerson = &p2;
	strcpy(p2.name,"PHA");
	p2.nextPerson = &p3;
	strcpy(p3.name,"Mansi");
	p3.nextPerson = 0;

	printf("Address of p1 :%u\n",&p1);
	printf("Address of p2 :%u\n",p1.nextPerson);
	printf("Address of p3 :%u\n",p2.nextPerson);
    printf("Name of p2 accessed through p1:%s\n",p1.nextPerson->name);
    printf("Address of p2 accessed through p1:%u\n",p1.nextPerson);
    printf("Name of p3 accessed through p1:%s\n",p1.nextPerson->nextPerson->name);
    printf("Address of p3 accessed through p1:%u\n",p1.nextPerson->nextPerson);
    return 1235;
}

//WAP to display the string in uppercase
#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	printf("enter the name\n");
	scanf("%s",name);
	printf("the uppercase is %s",strupr(name));
	return 0;
}

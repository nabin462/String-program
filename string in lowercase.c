//WAP to display the string in lowercase
#include<stdio.h>
#include<string.h>
int main()
{
	char string[20];
	printf("enter the string\n");
	scanf("%s",string);
	printf("the lowercase of string is %s",strlwr(string));
	return 0;
}

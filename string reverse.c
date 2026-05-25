//WAP to display the reverse of the string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter the string\n");
	scanf("%s",str);
	printf("the reverse of the string is %s",strrev(str));
	return 0;
}

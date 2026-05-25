//WAP to copy the the string
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("enter the string\n");
	scanf("%s",s1);
	printf("copy string=%s",strcpy(s2,s1));
	return 0;
}

//WAP to concatenates the strings
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter the two string\n");
	scanf("%s %s",str1,str2);
	printf("the concatenates of string is %s",strcat(str1,str2));
	return 0;
	
}

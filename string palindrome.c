//WAP to the given string is not palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter the string\n");
	scanf("%s",str1);
	strcpy(str2,str1);
	strrev(str1);
	if(strcmp(str1,str2)==0)
	{
		printf("the string is palindrome\n");
	}
	else
	{
		printf("the string isnot palindrome\n");
	}
	return 0;
}

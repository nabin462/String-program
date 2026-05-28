//WAP to count the repeated charcter in the string
#include<stdio.h>
#include<string.h>
int main()
{
	char st1[20];
	int i,c=0;
	printf("enter the  string\n");
	scanf("%s",st1);
	for(i=0;i<strlen(st1);i++)
	{
		if(st1[i]=='p')
		{ 
		
			c+=1;
		}
	}
	printf("the number p in string is%d",c);
	return 0;
}

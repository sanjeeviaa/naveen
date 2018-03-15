#include<stdio.h>
int main()
{
	char s[50],k[30];
	int i;
	printf("Enter the String:");
	scanf("%s",s);
	printf("\nEnter the Character to Find:");
	scanf("%s",k);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==k[0])
		{
			printf("%d",i);
		}
	}
}

#include<stdio.h>
int main()
{
	char s[50],k[30];
	int i,count=0;
	printf("Enter the String:");
	scanf("%s",s);
	printf("\nEnter the Character to Find:");
	scanf("%s",k);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==k[0])
		
		    count++;
		
		
		
	}
		printf("%d",count);
}

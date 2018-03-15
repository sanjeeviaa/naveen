#include<stdio.h>
int main()
{
	char a[30],b[30];
	int i,j,flag=0;
	printf("Enter the Two Strings:");
	scanf("%s%s",a,b);
	for(i=0;i<strlen(a);i++)
	{
		for(j=0;j<strlen(b);j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
			}
		}
	}
	if(flag==1)
	 printf("\nYes");
	else
	 printf("\nNo");
	 return 0;
}

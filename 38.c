#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2==0)
			{
				printf("%d ",i);
			}
		}
	}return 0;
}

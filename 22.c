#include<stdio.h>
int main()
{
	int i,m,n,max=1;
	scanf("%d %d",&m,&n);
	for(i=2;i<=m;i++)
	{
		if(m%i==0&&n%i==0)
		max=i;
}
printf("%d",max);
}

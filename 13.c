#include<stdio.h>
void main()
{
int n,r,c=0;
printf("enter the num");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
c=c+(r^2);
n=n/10;
}
printf("sum=%d",c);
}

#include<stdio.h>
int main()
{
	long int n,i,j=0,a[10],b[10],t,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	scanf("%d",&b[i]);
	for(i=n;i<n+k;i++)
	{
	a[i]=b[j];
	j++;
	}
	for(i=0;i<n+k;i++)
	{
	    for(j=0;j<n+k;j++)
	    {
	        if(a[i]<a[j])
	        {
	            t=a[i];
	            a[i]=a[j];
	            a[j]=t;
	        }
	    }
	}
if(a[n+k-1]==a[n+k-2])
printf("%d %d",a[n+k-1],a[n+k-2]);
else
printf("%d",a[n+k-1]);
}

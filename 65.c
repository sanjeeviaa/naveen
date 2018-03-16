#include<stdio.h>
int main()
{
	int a[100000],i,j,t,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		for(i=0;i<n;i++){
				for(j=0;j<n;j++)
				{
					if(a[i]<a[j])
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
						
					}
				}
			}
			for(i=0;i<n;i++)
			{
				if(a[i]<n)
				printf("%d ",a[i]);
			}
		}

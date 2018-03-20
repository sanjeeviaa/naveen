#include<stdio.h>
int main()
{int a[100000],max=0,count=0,i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {count=0;
 	for(j=0;j<n;j++)
 	{
 		if(a[i]==a[j])
 		count++;
	 }
	 if(count>max)
	 max=count;
	 
 }
 printf("%d",max);
}

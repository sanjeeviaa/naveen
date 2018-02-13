#include <stdio.h>

void main() {
    int a,n,i,count=0;
    scanf("%d%d",&a,&n);
    for(int k=a+1;k<n-1;k++)
    {
    for(i=1;i<=n;i++)
    {
    	if(k/i==0)
    	{
    		count++;
    	}
    }
    if(count==2)
    {
    	printf("%d\t",k);
    }
    }
	
}

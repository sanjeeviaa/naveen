
#include <stdio.h>
#include<string.h>

void main()
{char a[10000],b[1000];
int i,j,count=0,k;
    gets(a);
    gets(b);
    scanf("%d",&k);
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
    	if(b[j]==a[i])
		  count++;
 }
	if(count==k)
printf("yes");
else
printf("no");
    
}

#include <stdio.h>

void main()
{
   int n,k,a[30],i;
   printf("Enter the Size:");
   scanf("%d",&n);
   printf("Enter the K number:");
   scanf("%d",&k);
   printf("Enter the Elements:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n-k;i++)
   {
      printf("%d",a[i]);
   }
   
}

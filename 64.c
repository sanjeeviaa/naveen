#include <stdio.h>

void main()
{
   int n,k,a[30],i,j,t;
   printf("Enter the Size:");
   scanf("%d",&n);
   printf("Enter the K number:");
   scanf("%d",&k);
   printf("Enter the Elements:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       if(a[i]<k)
       {
           printf("%d\t",a[i]);
       }
   }
}

#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,b;
    printf("enter the number");
    scanf("%d",&n);
    a=sqrt(n);
    b=n%a;
    if(b==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}

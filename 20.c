#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b;
    int i,l;
    printf("enter the string");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<=l;i++)
    {
        b=a[i]+3;
        printf(" %c",b);
    }
    
}

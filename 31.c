#include<stdio.h>
void main()
{
char a[10];
int i,c1=0,c2=0;
printf("enter the string\n");
scanf("%s",a);
for(i=o;a[i]='\0';i++)
{
     if(a[i]==')' && a[i]=='(')
    { 
         break;
    }     
   else if(a[i]==')')
   {
   c1=c1+1;
   }
   if(a[i]=='(')
   {
   c2=c2+1;
   }
 }
 if(c1==c2)
 {
 printf("yes");
 }
 else("no");
 }
 }

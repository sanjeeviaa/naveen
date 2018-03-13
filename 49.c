#include<stdio.h>
void main()
{
signed int num;
scanf("%d",&num);
printf("enter the number %d\n",num);
if((num>=-32768)&&(num<=32767))
{
printf("INT");
}
else
{
printf("not int");
}
return 0;
}

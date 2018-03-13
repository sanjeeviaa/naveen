#include<stdio.h>
int main()
{
  char a[100];
  int i,c=0;
  printf("enter the string");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      c=c+1;
  }
  printf("%d",c);
}
